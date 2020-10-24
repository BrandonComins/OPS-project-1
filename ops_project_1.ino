#define LED 2
#define pot A3

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  Serial.print("Pot Value: ");
  Serial.println(getPot());
  delay(getPot());
  digitalWrite(LED, HIGH);
  delay(getPot());
  digitalWrite(LED, LOW);
 }

int getPot(){
   return analogRead(pot);
   }
