//Dieser Teil läuft einmal und konfiguriert die Pins
void setup() {
  pinMode(10, OUTPUT);        //konfiguriere Pin 10 als Ausgang
}

//Dieser Teil läuft unendlich:
void loop() {
  digitalWrite(10, HIGH);     //schaltet den PIN 10 auf 5V, die LED leuchtet
  delay(1000);                //wartet 1000ms=1s              
  digitalWrite(10, LOW);      //schaltet den PIN 10 auf 0V, die LED ist aus
  delay(1000);                //wartet 1s                  
}
