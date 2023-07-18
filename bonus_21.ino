// C++ code
//
int led=5;
int brightness=0;
void setup()
{
  pinMode(led,OUTPUT);
}

void loop()
{
 analogWrite(led,752);
delay(1000);
analogWrite(led,325);
delay(1000);  
analogWrite(led,28);
delay(1000);  
analogWrite(led,0);
delay(1000);
}
