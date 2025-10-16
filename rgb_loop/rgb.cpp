void setup()
{
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  digitalWrite(7, HIGH);
  delay(200); // Wait for 1000 millisecond(s)
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  delay(200);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  delay(200);
  digitalWrite(5,LOW);
  // Wait for 1000 millisecond(s)
}
