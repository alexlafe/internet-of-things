#include "WIFI.h"
#include "Server.h"
#include "MQTT.h"
#include "Range.h"

void setup()
{
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  WIFI_init(false);
  server_init();
  MQTT_init();
  init_sensor();
  mqtt_cli.publish((mqtt_client_id + "/state").c_str(), "hello");
}

void loop()
{
  server.handleClient();
  mqtt_cli.loop();
  float range = get_range();
  if (range < 100)
  {
    Serial.println("1");
  }
  else 
  {
    Serial.println("0");
  }
  
  mqtt_cli.publish((mqtt_client_id + "/range").c_str(), String(range).c_str());
  delay(1000);
}