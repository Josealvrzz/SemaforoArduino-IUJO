// Pines Vías Norte y Sur (Conectados en paralelo)
const int cocheVerdeNS = 2;
const int cocheAmarilloNS = 3;
const int cocheRojoNS = 4;
const int peatonVerdeNS = 5;
const int peatonRojoNS = 6;

// Pines Vías Este y Oeste (Conectados en paralelo)
const int cocheVerdeEO = 7;
const int cocheAmarilloEO = 8;
const int cocheRojoEO = 9;
const int peatonVerdeEO = 10;
const int peatonRojoEO = 11;

void setup() {
  for (int i = 2; i <= 11; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  digitalWrite(cocheVerdeNS, HIGH);
  digitalWrite(cocheAmarilloNS, LOW);
  digitalWrite(cocheRojoNS, LOW);
  digitalWrite(peatonVerdeNS, LOW);
  digitalWrite(peatonRojoNS, HIGH);

  digitalWrite(cocheVerdeEO, LOW);
  digitalWrite(cocheAmarilloEO, LOW);
  digitalWrite(cocheRojoEO, HIGH);
  digitalWrite(peatonVerdeEO, HIGH);
  digitalWrite(peatonRojoEO, LOW);

  delay(5000);

  digitalWrite(cocheVerdeNS, LOW);
  digitalWrite(cocheAmarilloNS, HIGH);
  digitalWrite(peatonVerdeEO, LOW);
  digitalWrite(peatonRojoEO, HIGH);

  delay(2000);

  digitalWrite(cocheAmarilloNS, LOW);
  digitalWrite(cocheRojoNS, HIGH);
  digitalWrite(peatonVerdeNS, HIGH);
  digitalWrite(peatonRojoNS, LOW);

  digitalWrite(cocheVerdeEO, HIGH);
  digitalWrite(cocheRojoEO, LOW);

  delay(5000);

  digitalWrite(cocheVerdeEO, LOW);
  digitalWrite(cocheAmarilloEO, HIGH);
  digitalWrite(peatonVerdeNS, LOW);
  digitalWrite(peatonRojoNS, HIGH);

  delay(2000);

  digitalWrite(cocheAmarilloEO, LOW);
}
