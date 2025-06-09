const int motorPin1 = 9;  // DC motor 1 op pin 9
const int motorPin2 = 10; // DC motor 2 op pin 10
const int buttonPin = 2;  // Pin waarop de knop is aangesloten
bool buttonState = false;

void setup() {
    pinMode(motorPin1, OUTPUT);
    pinMode(motorPin2, OUTPUT);
    pinMode(buttonPin, INPUT_PULLUP); // Knop als input met interne pull-up weerstand
}

void loop() {
    if (digitalRead(buttonPin) == LOW) { // Controleer of knop is ingedrukt
        if (!buttonState) { // Voorkom herhaalde activering
            buttonState = true;
            analogWrite(motorPin1, 255); // Motor 1 op max snelheid
            analogWrite(motorPin2, 255); // Motor 2 op max snelheid
            delay(5000); // Laat de motoren 5 seconden draaien
            analogWrite(motorPin1, 0);  // Motor 1 uit
            analogWrite(motorPin2, 0);  // Motor 2 uit
        }
    } else {
        buttonState = false; // Reset knopstatus als deze losgelaten wordt
    }
}