#define echoPin 12
#define trigPin 11
struct LED {
  byte L1;
  byte L2;
  byte L3;
  byte L4;
  byte L5;
  byte L6;
  byte L7;
  byte L8;
  byte L9;
};
LED L = {2, 3, 4, 5, 6, 7, 8, 9, 10};
int buzzer = A0;
int frequency = 0;
int del = 0;
void setup() {
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(L.L1, OUTPUT);
  pinMode(L.L2, OUTPUT);
  pinMode(L.L3, OUTPUT);
  pinMode(L.L4, OUTPUT);
  pinMode(L.L5, OUTPUT);
  pinMode(L.L6, OUTPUT);
  pinMode(L.L7, OUTPUT);
  pinMode(L.L8, OUTPUT);
  pinMode(L.L9, OUTPUT);
  pinMode(buzzer, OUTPUT);
}
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  unsigned long distance = pulseIn(echoPin, HIGH);
  distance = (distance * 0.034482) / 2;
  if (distance <= 60) {
    digitalWrite(L.L1, HIGH);
    digitalWrite(L.L2, LOW);
    digitalWrite(L.L3, LOW);
    digitalWrite(L.L4, LOW);
    digitalWrite(L.L5, LOW);
    digitalWrite(L.L6, LOW);
    digitalWrite(L.L7, LOW);
    digitalWrite(L.L8, LOW);
    digitalWrite(L.L9, LOW);
    frequency = 850;
    del = 50;
  }
  if (distance <= 55) {
    digitalWrite(L.L1, HIGH);
    digitalWrite(L.L2, HIGH);
    digitalWrite(L.L3, LOW);
    digitalWrite(L.L4, LOW);
    digitalWrite(L.L5, LOW);
    digitalWrite(L.L6, LOW);
    digitalWrite(L.L7, LOW);
    digitalWrite(L.L8, LOW);
    digitalWrite(L.L9, LOW);
    frequency = 850;
    del = 60;
  }

  if (distance <= 50) {
    digitalWrite(L.L1, HIGH);
    digitalWrite(L.L2, HIGH);
    digitalWrite(L.L3, HIGH);
    digitalWrite(L.L4, LOW);
    digitalWrite(L.L5, LOW);
    digitalWrite(L.L6, LOW);
    digitalWrite(L.L7, LOW);
    digitalWrite(L.L8, LOW);
    digitalWrite(L.L9, LOW);
    frequency = 850;
    del = 70;
  }

  if (distance <= 45) {
    digitalWrite(L.L1, HIGH);
    digitalWrite(L.L2, HIGH);
    digitalWrite(L.L3, HIGH);
    digitalWrite(L.L4, HIGH);
    digitalWrite(L.L5, LOW);
    digitalWrite(L.L6, LOW);
    digitalWrite(L.L7, LOW);
    digitalWrite(L.L8, LOW);
    digitalWrite(L.L9, LOW);
    frequency = 850;
    del = 80;
  }

  if (distance <= 40) {
    digitalWrite(L.L1, HIGH);
    digitalWrite(L.L2, HIGH);
    digitalWrite(L.L3, HIGH);
    digitalWrite(L.L4, HIGH);
    digitalWrite(L.L5, HIGH);
    digitalWrite(L.L6, LOW);
    digitalWrite(L.L7, LOW);
    digitalWrite(L.L8, LOW);
    digitalWrite(L.L9, LOW);
    frequency = 850;
    del = 90;
  }

  if (distance <= 35) {
    digitalWrite(L.L1, HIGH);
    digitalWrite(L.L2, HIGH);
    digitalWrite(L.L3, HIGH);
    digitalWrite(L.L4, HIGH);
    digitalWrite(L.L5, HIGH);
    digitalWrite(L.L6, HIGH);
    digitalWrite(L.L7, LOW);
    digitalWrite(L.L8, LOW);
    digitalWrite(L.L9, LOW);
    frequency = 850;
    del = 100;
  }

  if (distance <= 30) {
    digitalWrite(L.L1, HIGH);
    digitalWrite(L.L2, HIGH);
    digitalWrite(L.L3, HIGH);
    digitalWrite(L.L4, HIGH);
    digitalWrite(L.L5, HIGH);
    digitalWrite(L.L6, HIGH);
    digitalWrite(L.L7, HIGH);
    digitalWrite(L.L8, LOW);
    digitalWrite(L.L9, LOW);
    frequency = 850;
    del = 120;
  }

  if (distance <= 25) {
    digitalWrite(L.L1, HIGH);
    digitalWrite(L.L2, HIGH);
    digitalWrite(L.L3, HIGH);
    digitalWrite(L.L4, HIGH);
    digitalWrite(L.L5, HIGH);
    digitalWrite(L.L6, HIGH);
    digitalWrite(L.L7, HIGH);
    digitalWrite(L.L8, HIGH);
    digitalWrite(L.L9, LOW);
    frequency = 850;
    del = 140;
  }

  if (distance <= 20) {
    digitalWrite(L.L1, HIGH);
    digitalWrite(L.L2, HIGH);
    digitalWrite(L.L3, HIGH);
    digitalWrite(L.L4, HIGH);
    digitalWrite(L.L5, HIGH);
    digitalWrite(L.L6, HIGH);
    digitalWrite(L.L7, HIGH);
    digitalWrite(L.L8, HIGH);
    digitalWrite(L.L9, HIGH);
    frequency = 850;
    del = 180;
  }
  delay(165);
  if (distance > 60 || distance < 0) {
    noTone(buzzer);
    digitalWrite(L.L1, LOW);
    digitalWrite(L.L2, LOW);
    digitalWrite(L.L3, LOW);
    digitalWrite(L.L4, LOW);
    digitalWrite(L.L5, LOW);
    digitalWrite(L.L6, LOW);
    digitalWrite(L.L7, LOW);
    digitalWrite(L.L8, LOW);
    digitalWrite(L.L9, LOW);
  }
  else {
    tone(buzzer, frequency, del);
  }
}
