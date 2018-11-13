int ledPin1=4;
int ledPin2=5;
int ledPin3=6;
int ledPin4=7;
int ledPin5=8;
int ledPin6=9;
int ledPin7=10;
int ledPin8=11;



int keyPin=2;
int i=1;
int j=0;
int rand_n;
void setup()
{
pinMode(ledPin1,OUTPUT);
pinMode(ledPin2,OUTPUT);
pinMode(ledPin3,OUTPUT);
pinMode(ledPin4,OUTPUT);
pinMode(ledPin5,OUTPUT);
pinMode(ledPin6,OUTPUT);
pinMode(ledPin7,OUTPUT);
pinMode(ledPin8,OUTPUT);

pinMode(keyPin,INPUT);
Serial.begin(9600);


while(1)
{
  int keyState =digitalRead(keyPin);
  
   
  rand_n=random(4,13);
    if (keyState==HIGH)
        {
          j=1;
         Serial.println("bb");
          //i=17;
          //j=j+1;
          Serial.println(i);
          //delay(1000);
          //break;
          digitalWrite(rand_n,HIGH);
          delay(50);
          if (j==1)
            {
            delay(10000);
              
            }
          
        
        }
  digitalWrite(rand_n,HIGH);
  delay(50);
  digitalWrite(rand_n,LOW);
  delay(50);




 
  
  } 
   
  // put your setup code here, to run once:

}





    void loop()
  {
     
  }


  
  
  
