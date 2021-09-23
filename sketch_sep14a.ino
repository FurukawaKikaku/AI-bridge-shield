void setup() {
  // put your setup code here, to run once:
  int i;
  for(i=3; i<11; i++){
    pinMode(i, OUTPUT);
  } 
  for(i=3; i<11; i++){
    digitalWrite(i, HIGH);
  } 
}

void loop() {
  delay(1000);
}
