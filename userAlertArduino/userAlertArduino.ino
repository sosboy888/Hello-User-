int PIRpin=7;
int LEDpin=13;
void setup() {
  // put your setup code here, to run once:
  pinMode(PIRpin,INPUT);
  digitalWrite(LEDpin,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(PIRpin)==HIGH){
      digitalWrite(LEDpin,HIGH);
      Serial.println("User arrived");
    }
 if(digitalRead(PIRpin)==LOW){
    digitalWrite(LEDpin,LOW);
    Serial.println("User idle");
  }
}
