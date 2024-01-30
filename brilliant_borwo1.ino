// C++ code
//
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop()
{
  digitalWrite(12, HIGH);
  delay(500); 
 
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(4, HIGH);
  delay(500);
  digitalWrite(4, LOW);
  delay(500);
  digitalWrite(4, HIGH);
  delay(500);
  digitalWrite(4, LOW);
  delay(500);
  digitalWrite(4, HIGH);
  delay(500);
  digitalWrite(4, LOW);
  
  digitalWrite(12, LOW);
   delay(500);
  digitalWrite(8, HIGH);
   delay(500);
  digitalWrite(8, LOW);
   delay(500);
  
  
  
  
  
}