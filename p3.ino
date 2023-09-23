
void setup() {
  
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  
  pinMode(10, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  
  int x = digitalRead(2);
  int y = digitalRead(3);
  
  
  if (x == HIGH) {
    analogWrite(10, 125);
     digitalWrite(5, HIGH);
   
  } else {
    analogWrite(10, LOW);
    digitalWrite(5, LOW);
    
  }
  
  if (y == HIGH) {
    digitalWrite(7, HIGH);
    analogWrite(9, 125);
  } else {
    digitalWrite(7, LOW);
    analogWrite(9, 0);
  }
}