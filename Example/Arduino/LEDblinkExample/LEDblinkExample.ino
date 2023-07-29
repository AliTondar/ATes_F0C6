



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600) ; 
  pinMode(LED_BUILTING, OUTPUT);
  pinMode(LED_BUILTINR, OUTPUT);
  pinMode(LED_BUILTINY, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Arts of tech");
  digitalWrite(LED_BUILTING, 0);
  digitalWrite(LED_BUILTINY, 1);
  delay(500); 
  digitalWrite(LED_BUILTINY, 0);
  digitalWrite(LED_BUILTINR, 1);
  delay(500); 
  digitalWrite(LED_BUILTINR, 0);
  digitalWrite(LED_BUILTING, 1);
  delay(500); 


}
