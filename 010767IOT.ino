
void setup() {

pinMode(led, OUTPUT); 
Serial.begin(9600);
}

void loop() {
  for(int i=50 ; i>=0 ; i--){
    Serial.println(i);
    digitalWrite(led, HIGH); 
    delay(i); 
    digitalWrite(led, LOW); 
    delay(i); 
  }
  
}
