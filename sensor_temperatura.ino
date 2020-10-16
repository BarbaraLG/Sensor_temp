int port1=0;
float temp; 
void setup()
  {
  pinMode (A0, INPUT);
  Serial.begin(9600);
  }

void loop() {
  temp = analogRead(A0);
  temp = map(temp,0,1023,0,69);
  Serial.println("La temperatura es: ");
  Serial.println(temp);
  delay(1000);

}
