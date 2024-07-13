
#include<AFMotor.h>
int data;
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

void setup() {

  

  Serial.begin(9600);
  pinMode(13,OUTPUT);

}

void loop() {
  while(Serial.available()>0){
    data=Serial.read();
    Serial.println(data);

   switch(data){
    case 'A':  //front
        motor1.run(FORWARD);
        motor2.run(FORWARD);
        motor3.run(FORWARD);
        motor4.run(FORWARD);
        digitalWrite(13,LOW);
        break;


      case 'B':  //left
        motor1.run(BACKWARD);
        motor2.run(FORWARD);
        motor3.run(FORWARD);
        motor4.run(BACKWARD);
        digitalWrite(13,LOW);
        break;


      case 'C':  //right
        motor1.run(FORWARD);
        motor2.run(BACKWARD);
        motor3.run(BACKWARD);
        motor4.run(FORWARD);
        digitalWrite(13,LOW);
        break;


      case 'D':  //back
        motor1.run(BACKWARD);
        motor2.run(BACKWARD);
        motor3.run(BACKWARD);
        motor4.run(BACKWARD);
        digitalWrite(13,LOW);
        break;

      case 'E':
        motor1.run(RELEASE);
        motor2.run(RELEASE);
        motor3.run(RELEASE);
        motor4.run(RELEASE);
        digitalWrite(13,HIGH);
        break;
   }
  }

}