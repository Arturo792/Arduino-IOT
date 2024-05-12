#define BOTON 4 
int valor;
void setup() {
  pinMode(BOTON, INPUT);
  Serial.begin(115200);
}

void loop() {
  valor = digitalRead(BOTON);
  Serial.println(valor);
  delay(500);
}
