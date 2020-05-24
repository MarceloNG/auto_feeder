#include <ESP8266WiFi.h>
#include <DNSServer.h>
#include <ESP8266WebServer.h>
#include <WiFiManager.h>


#include "GerenciadorWifi.h"

void GerenciadorWifi::begin()
{
    WiFiManager wifiManager;
    wifiManager.autoConnect("Meme's Feeder");
}
