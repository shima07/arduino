int val = 0;

void setup(){
  Serial.begin(9600);
}

void loop(){
  val = analogRead(0);
  Serial.println(val);
  delay(100);
}
