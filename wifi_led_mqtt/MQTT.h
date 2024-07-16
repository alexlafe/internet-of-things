#include <PubSubClient.h>

PubSubClient mqtt_cli(wifiClient);

String mqtt_broker = "broker.emqx.io";
int mqtt_port = 1883;
String mqtt_client_id = "chushka86";

void callback(char *topic, byte *payload, unsigned int length)
{
  Serial.print("Message received on topic");
  Serial.println(topic);
  Serial.print("Message: ");
  
  for (int i=0; i<length; i++)
  {
    Serial.print((char) payload[i]);
  }

  Serial.println();
  Serial.println("------------------");
}

void MQTT_init()
{
  mqtt_cli.setServer(mqtt_broker.c_str(), mqtt_port);
  mqtt_cli.setCallback(callback);
  
  while(!mqtt_cli.connected())
  {
    mqtt_client_id = "esp8266-" + id();
    if (mqtt_cli.connect(mqtt_client_id.c_str()))
    {
      Serial.println("MQTT connected woth id " + mqtt_client_id);
    }
    else
    {
      Serial.println("MQTT failed to connect");
      Serial.println(mqtt_cli.state());
      delay(1000);
    }
  }
}

