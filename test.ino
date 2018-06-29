int data;

void setup() 
{ 
  Serial.begin(9600); 
  pinMode(13, OUTPUT); 
  digitalWrite (13, LOW); 
  pinMode(12, OUTPUT); 
  digitalWrite (12, LOW); 
  pinMode(11, OUTPUT); 
  digitalWrite (11, LOW); 
   
  Serial.println("This is my First Test.");
}
 
void loop() 
{
while (Serial.available())
  {
    data = Serial.read();
  }

  if (data == '1')
  digitalWrite (13, HIGH);
  delay(100);
  digitalWrite (13, LOW);
 
 
  if (data == '2')
  digitalWrite (12, HIGH);
  delay(100);
  digitalWrite (12, LOW);
  
  if (data == '3')
  digitalWrite (11, HIGH);
  delay(100);
  digitalWrite (11, LOW);

if (data == '0')
  digitalWrite (13, LOW); 
  digitalWrite (12, LOW); 
  digitalWrite (11, LOW); 
}
