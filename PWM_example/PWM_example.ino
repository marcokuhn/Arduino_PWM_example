const int POTI_PIN = A0;
const int LED_PWM_PIN = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_PWM_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int poti_value = analogRead(POTI_PIN);
  Serial.println(poti_value);
  int scaled_value = map(poti_value,0, 1023,0, 255);
  analogWrite(LED_PWM_PIN,scaled_value);
} 
//Laurens
