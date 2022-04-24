void setup() {
  //Dieser Teil läuft einmal und konfiguriert die Pins
  pinMode(10, INPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  digitalWrite(8, HIGH);
  //Dieser Teil läuft unendlich:
  if(digitalRead(10)==false){           //liest Zustand an PIN 10 aus, dieser ist false, 
      delay(3000);
      digitalWrite(8, LOW);                                  //wenn der Taster geschlossen ist
      digitalWrite(9, HIGH);  //schaltet die Onboard-LED an
      delay(2000);
      digitalWrite(9, LOW);                                  //wenn der Taster geschlossen ist
      digitalWrite(8, HIGH);
  }
  delay(10);                            //wartet 10ms um den Arduino zu entlasten
}
