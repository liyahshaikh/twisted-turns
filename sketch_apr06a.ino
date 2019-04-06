#define speed 120
#define leftMotor1 5
#define leftMotor2 2
#define rightMotor1 4
#define rightMotor2 3
#define enl 9
#define enr 10

int val1=0;
int val2=0;
int val3=0;
int val4=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(leftMotor1,OUTPUT);
  pinMode(leftMotor2,OUTPUT);
  pinMode(rightMotor1,OUTPUT);
  pinMode(rightMotor2,OUTPUT);
  analogWrite(enl,speed);
  analogWrite(enr,speed);
  pinMode(13,INPUT);
  pinMode(12,INPUT);
  pinMode(11,INPUT);
  pinMode(7,INPUT);
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
  val1=digitalRead(13);
  val2=digitalRead(12);
  val3=digitalRead(11);
  val4=digitalRead(7);
  
  if(val1==LOW){
    straight();
  }
  if(val2==LOW){
    turnright();
  }
  if(val3==LOW){
    turnleft();
  }
  if(val4==LOW){
    straight();
  }
  
}
void straight(){
  digitalWrite(leftMotor1,HIGH);
  digitalWrite(leftMotor2,LOW);
  digitalWrite(rightMotor1,HIGH);
  digitalWrite(rightMotor2,LOW);
}
void turnright(){
 digitalWrite(leftMotor1,HIGH);
  digitalWrite(leftMotor2,LOW);
  digitalWrite(rightMotor1,LOW);
  digitalWrite(rightMotor2,LOW);
 
  
}
void turnleft(){
  digitalWrite(leftMotor1,LOW);
  digitalWrite(leftMotor2,LOW);
  digitalWrite(rightMotor1,HIGH);
  digitalWrite(rightMotor2,LOW);
}
