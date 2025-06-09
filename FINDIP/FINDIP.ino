#include <WiFiNINA.h>
#include <Wire.h>

// WiFi-netwerkconfiguratie
const char* ssid = "MI A3";
const char* password = "69696969";

void setup() {
  Serial.begin(9600); // Start de seriële monitor
  connectToWiFi();
}

void loop() {
  // Hier kun je andere code toevoegen
}

void connectToWiFi() {
  Serial.print("Verbinden met WiFi...");
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
  
  Serial.println("\nVerbonden met WiFi!");
  Serial.print("IP-adres: ");
  Serial.println(WiFi.localIP()); // Print het IP-adres
}
