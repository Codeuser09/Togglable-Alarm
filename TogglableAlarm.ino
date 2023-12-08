int switchState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(4, INPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  switchState = digitalRead(4);
  Serial.print(switchState);
  if (switchState == HIGH)
  {
    digitalWrite(2, HIGH);
    Serial.print("Turned On");
  }

  if (switchState == LOW)
  {
    digitalWrite(2, LOW);
    Serial.print("Turned off");
  }
}
