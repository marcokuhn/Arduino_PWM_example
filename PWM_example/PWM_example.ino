const int POTI_PIN = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int poti_value = analogRead(POTI_PIN);
  Serial.println(poti_value);
}
