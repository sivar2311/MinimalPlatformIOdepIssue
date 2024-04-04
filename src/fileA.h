#include <ESPAsyncWebServer.h>

extern AsyncWebServer server;

void setupWiFi(const char* wifi_ssid, const char* wifi_pass);
void setupWebServer();
