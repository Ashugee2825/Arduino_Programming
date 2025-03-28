#define LED 2
void setup() {
  // put your setup code here, to run once:
  pincode(LED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalwrite(LED,HIGH);
  delay (1000);
  digitalWrite(LED,LOW);
  delay(1000);




}
