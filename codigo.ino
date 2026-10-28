const int sensorHumedad = A1;
const int led = 13;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {

  int humedad = analogRead(sensorHumedad);

  Serial.print("Humedad del suelo: ");
  Serial.println(humedad);

  if (humedad < 400) {
    // Suelo seco
    digitalWrite(led, HIGH);
    Serial.println("Suelo seco - necesita agua");
  } 
  else {
    // Suelo húmedo
    digitalWrite(led, LOW);
    Serial.println("Suelo humedo");
  }

  delay(1000);
}