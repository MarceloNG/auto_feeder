#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <DNSServer.h>

#include "GerenciadorWifi.h"


void setup()
{
    Serial.begin(115200);
    GerenciadorWifi::begin();
}

void loop()
{
    Serial.println("Hello world!");
    delay(1000); 
}

