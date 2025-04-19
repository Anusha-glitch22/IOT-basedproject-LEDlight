#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "TMPL3Hh3wJ4Ij"
#define BLYNK_TEMPLATE_NAME "home appliance LED light"
#define BLYNK_AUTH_TOKEN "gOLG7XNMEfGMCsZCLb8XxDXXPDSFxul6"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Your WiFi credentials
char ssid[] = "Blue";
char pass[] = "Shubha12";

// Define LED pin
#define LED_PIN D1


void setup() {
  Serial.begin(9600);
  delay(100);

  pinMode(LED_PIN, OUTPUT);

  // Start connecting
  Serial.print("Connecting to WiFi: ");
  Serial.println(ssid);
  
  WiFi.begin(ssid, pass);

  // Wait until connected
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");

  // put your setup code here, to run once:

}
Serial.println("");
  Serial.println("WiFi Connected!");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  // Connect to Blynk
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

BLYNK_WRITE(V0)
{
  int pinValue = param.asInt(); // Get value from Blynk app
  
  digitalWrite(LED_PIN, pinValue); // Set LED

  // Log to Serial
  if (pinValue == 1) {
    Serial.println("LED is ON");
  } else {
    Serial.println("LED is OFF");
  }
}

BLYNK_WRITE(V1) {
  int brightness = param.asInt();  // Get the slider value (0-255)
  analogWrite(LED_PIN, brightness);  // Set the LED brightness using PWM
}

void loop() {
  // put your main code here, to run repeatedly:
Blynk.run();


}
