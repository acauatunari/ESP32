#include <Arduino.h>
#include <DNSServer.h>
#include <WiFi.h>
#include "../include/AsyncTCP.h"
#include "../include/ESPAsyncWebServer.h"

DNSServer dnsServer;
AsyncWebServer server(80);

String user_name;
String proficiency;
bool name_received = false;
bool proficiency_received = false;

const char index_html[] PROGMEM = R"rawliteral(
<!DOCTYPE HTML>
<html>
  <head>
    <title>Captive Portal Demo</title>
    <meta name="viewport" content="width=device-width, initial-scale=1">
  </head>

  <body>
    <h3>Captive Portal Demo</h3>
    <br><br>
    <form action="/get">
      <br>
      Name: <input type="text" name="name">
      <br>
      ESP32 Proficiency: 
      <select name = "proficiency">
        <option value=Beginner>Beginner</option>
        <option value=Advanced>Advanced</option>
        <option value=Pro>Pro</option>
      </select>
      <input type="submit" value="Submit">
    </form>
  </body>
</html>
)rawliteral";



void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}
