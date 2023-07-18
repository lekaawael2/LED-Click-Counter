// C++ code
//
int led = 2;
int led2 = 3;
int led3 = 4;
int button = 9;
int Reading = 0;
int counter= 0;
void setup()
{
    pinMode(led,OUTPUT);
    pinMode(led2,OUTPUT);
    pinMode(led3,OUTPUT);
  pinMode(button,INPUT);
  }

void loop()
{
  Reading = digitalRead(button);
  if (Reading == HIGH){
    counter++;
    switch(counter)
    {
      case 1:digitalWrite(led,HIGH);
      break;
      case 2:digitalWrite(led2,HIGH);
      break;
      case 3:digitalWrite(led3,HIGH);
      break;
      default:digitalWrite(led,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      counter=0;
      break;
    }
    while(digitalRead(button)== HIGH);
  }
}
