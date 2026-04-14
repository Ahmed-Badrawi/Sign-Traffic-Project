int led = 13;
void setup() {
  pinMode (led, OUTPUT);

}

void loop() {
  
  for (int i = 1; i <= 7; i++)
  {
    digitalWrite (led, HIGH);
    delay (1000);
    digitalWrite (led, LOW);
    delay (1000);
    break;
  }
  

}
