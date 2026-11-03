int red = 10;
int yellow = 9;
int green = 8;

// Motor 1 (Pole)
int IN1 = 6;
int IN2 = 7;

// Motor 2 (Escalator)
int IN3 = 2;
int IN4 = 3;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  // GREEN (ALL STOP)
  digitalWrite(green, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(5000);

  // FIRST YELLOW (CW)
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(3000);

  // RED (ESCALATOR ON)
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  delay(10000);

  // SECOND YELLOW (CCW)
  digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(3000);
}
