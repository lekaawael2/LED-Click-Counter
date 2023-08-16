int counter=0;
int d=500;
void setup() {
  // put your setup code here, to run once:

pinMode(2,INPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
  
 
  
}
void loop() {
  // put your main code here, to run repeatedly:

int botton =digitalRead(2);

if(botton==1)
{
  counter+=1;
 switch(counter)
 {
  counter++;
  case 2:
  digitalWrite(3,HIGH);
    

  
  break;
case 1:
  digitalWrite(4,HIGH);
   
  break;
  case 3:
  digitalWrite(5,HIGH);
      
  
  break;
  case 4:
  
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,0);
  counter=0;
 break;  
  
  default:
   digitalWrite(8,HIGH);  break; 
  } 
  while(botton ==1){
  }
   delay(d);
  
  }


}