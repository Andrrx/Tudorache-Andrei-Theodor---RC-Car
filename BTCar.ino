// Definirea pinilor pentru L298N
#define IN1 13
#define IN2 12
#define IN3 11
#define IN4 10
#define ENA 9  // PWM pentru motorul din față
#define ENB 8  // PWM pentru motorul din spate

char command;
char lastCommand = '\0';

void setup() {
  // Configurarea pinilor ca ieșiri
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  // Pornirea comunicației seriale
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) { 
    command = Serial.read();
    if (command != lastCommand) { // Execută doar dacă comanda se schimbă
      lastCommand = command;
      stopMotors(); // Oprește motoarele înainte de a schimba direcția
      switch (command) {
        case 'F': forward(); break; // Înainte
        case 'B': back(); break;    // Înapoi
        case 'L': left(); break;    // Stânga
        case 'R': right(); break;   // Dreapta
        case 'S': stopMotors(); break; // Stop
      }
    }
  }
}

void forward() {
  // Motoarele merg înainte
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENA, 255); // Setare viteză maximă pentru motorul din față
  analogWrite(ENB, 255); // Setare viteză maximă pentru motorul din spate
}

void back() {
  // Motoarele merg înapoi
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
}

void left() {
  // Rotire spre stânga
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
}

void right() {
  // Rotire spre dreapta
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
}

void stopMotors() {
  // Oprirea motoarelor
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
}
