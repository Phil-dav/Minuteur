#include <Arduino.h>

// Définition de la broche de la LED intégrée
#define LED_PIN LED_BUILTIN

void setup() {
  // Initialisation du port série à 115200 bauds
  Serial.begin(115200);
  while (!Serial) {
    ; // Attendre que le port série soit prêt
  }

  // Configuration de la broche de la LED en sortie
  pinMode(LED_PIN, OUTPUT);

  // Message de bienvenue dans le moniteur série
  Serial.println("Test de la carte Wemos D1 Mini");
}

void loop() {
  // Allumer la LED intégrée
  digitalWrite(LED_PIN, LOW); // LED_BUILTIN est inversée sur ESP8266
  Serial.println("LED allumée");
  delay(1000); // Attendre 1 seconde

  // Éteindre la LED intégrée
  digitalWrite(LED_PIN, HIGH); // LED_BUILTIN est inversée sur ESP8266
  Serial.println("LED éteinte");
  delay(1000); // Attendre 1 seconde
}

