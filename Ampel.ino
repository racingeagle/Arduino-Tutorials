void setup() {
  //Dieser Teil läuft einmal und konfiguriert die Pins
  pinMode(10, INPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  digitalWrite(8, HIGH);
  //Dieser Teil läuft unendlich:
  if(digitalRead(10)==false){           //liest Zustand an PIN 10 aus
      delay(3000);                      //wartet 3s
      digitalWrite(8, LOW);             //schaltet die Ampel auf grün                     
      digitalWrite(9, HIGH);            
      delay(2000);                      //wartet 2s
      digitalWrite(9, LOW);             //schaltet die Ampel auf rot          
      digitalWrite(8, HIGH);
  }
  delay(10);                            //wartet 10ms um den Arduino zu entlasten
}
