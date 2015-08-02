void setup() {
  pinMode(2,INPUT) ;
  pinMode(3,INPUT) ;
  pinMode(4,INPUT) ;
  pinMode(5,INPUT) ;
  pinMode(6,INPUT) ;
  pinMode(7,INPUT) ;
  pinMode(13,OUTPUT) ;
  Serial.begin(9600);
}

void loop() {
  for(int i = 2; i<8; i++){
    if (digitalRead(i) == LOW) {
      Serial.print("LOW");
      Serial.print("\t");
    }else{
      Serial.print("HIGH");
      Serial.print("\t");
    }
  }
  int val=analogRead(0);
  Serial.print(val);
  Serial.print("\t");
  int val1=analogRead(1);
  Serial.print(val1);
  Serial.println("");
}
