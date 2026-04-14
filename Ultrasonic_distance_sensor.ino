int trigPin = 9; //PWM
int ecoPin = 10; // PWM
long duration;
int distance;

void setup() {
  pinMode (trigPin, OUTPUT);
  pinMode (ecoPin, INPUT);
  Serial.begin (9600); // Serial Communication 

}

void loop() {
  digitalWrite (trigPin, LOW);
  delayMicroseconds (2);
  digitalWrite (trigPin, HIGH);
  delayMicroseconds (10);
  digitalWrite (trigPin, LOW); // to send new signals
  duration = pulseIn (ecoPin, HIGH); // Time
  distance = duration * 0.034/2;
  Serial.print ("Distance: ");
  Serial.print (distance);
  Serial.print (" cm");
  Serial.println ();

}
