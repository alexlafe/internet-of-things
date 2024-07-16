#include <PubSubClient.h>

PubSubClient mqtt_cli(WiFiClient);

String mqtt_broker = "broker.emqx.io";
int mqtt_port = 1883;

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
    String client_id = "esp8266-" + String(WiFi.macAddress());
    if (mqtt_cli.connect(client_id.c_str()))
    {
      Serial.println("MQTT connected woth id " + client_id);
    }
    else
    {
      Serial.println("MQTT failed to connect");
      Serial.println(mqtt_cli.state());
      delay(1000);
    }
  }
}