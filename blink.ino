void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(4, HIGH);
  delay(5000);                       
  digitalWrite(4, LOW);   
  digitalWrite(8, HIGH);
  delay(2000);                     
  digitalWrite(8, LOW);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(5000);  
}
