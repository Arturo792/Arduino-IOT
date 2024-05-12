#define ECHO 12
#define TRIG 13
double tiempo;
double distancia;
void setup() {
  Serial.begin(115200);
pinMode(ECHO, INPUT);
pinMode(TRIG, OUTPUT);
digitalWrite(TRIG, LOW);
}

void loop() {
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  tiempo = pulseIn(ECHO, HIGH);
  distancia = tiempo/58.4;
  Serial.println(distancia);
  delay(1000);

}
