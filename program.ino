
// Lampes allumées par alternance
// By @DemangeJeremy

// Déclaration des variables

// L'état du bouton => 0 == éteint - interrupteur ouvert | 1 == allumée - interrupteur fermé
int boutonEtat = 0; // Etat du bouton

// Emplacement des éléments sur les entrées sorties => à modifier selon votre montage
const int boutonPin = 13; // Pin mode du bouton
const int bleu = 7; // Pin mode de la lumière bleue
const int vert = 5; // Pin mode de la lumière verte
const int rouge = 3; // Pin mode de la lumière rouge

void setup() {
  // Déclaration des entrées sorties des éléments
  pinMode(boutonPin, INPUT);
  pinMode(bleu, OUTPUT);
  pinMode(vert, OUTPUT);
  pinMode(rouge, OUTPUT);
}

void loop() {
  // On lit l'état du bouton
  boutonEtat = digitalRead(boutonPin);

  // On lance la boucle en allumant les lampes par alternance
  // Si l'interrupteur est fermé => On allume les lampes par alternance
  if (boutonEtat == HIGH) {
    digitalWrite(bleu, HIGH);
    delay(1000);
    digitalWrite(bleu, LOW);
    digitalWrite(vert, HIGH);
    delay(1000);
    digitalWrite(vert, LOW);
    digitalWrite(rouge, HIGH);
    delay(1000);
  }

  // Si l'interrupteur est ouvert => On éteint toutes les lampes
  if (boutonEtat == LOW) {
    digitalWrite(bleu, LOW);
    digitalWrite(vert, LOW);
    digitalWrite(rouge, LOW);
  }

}
