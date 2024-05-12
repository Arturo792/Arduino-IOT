#define  LED 13 
int led = 13;
void setup() {
  pinMode(LED, OUTPUT);


}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);

  digitalWrite(led, LOW);
  delay(1000);


}
