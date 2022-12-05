#include <Servo.h>

Servo se1;
Servo se2;
Servo se3;

const byte servoPin1 = 2;
const byte servoPin2 = 3;
const byte servoPin3 = 4;


//irs
int in = 21;
int inV =0;

int ir1 = 50;
int irV1 =0;

int ir2 = 52;
int irV2 =0;

int ir3 = 48;
int irV3 =0;

//int ir5 = 17;
//int irval5 =0;

//int ir6 = 16;
//int irval6 =0;



void setup()
{
  se1.attach(servoPin1);
  se2.attach(servoPin2);
  se3.attach(servoPin3);
  

  pinMode(in,INPUT);
  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);
  pinMode(ir3,INPUT);
  //pinMode(ir5,INPUT);
  //pinMode(ir6,INPUT);


  
 
}

void loop()
{
 
  inV=digitalRead(in);
  irV1=digitalRead(ir1);
  irV2=digitalRead(ir2);
  irV3=digitalRead(ir3);
  //irval5=digitalRead(ir5);
  //irval6=digitalRead(ir6);

 if (inV == LOW && irV3 ==LOW) {
    
    delay(1000);
    se1.write(150);
    se3.write(150);
    
  }
  else{
if (inV == HIGH && irV3 ==LOW)
{
  delay(1000);
  se2.write(90);
  se3.write(150);  
  
}

  }


  if (irV2 ==LOW) {

    se3.write(90);
    se2.write(50);
    
  
    delay(5);

  }
  
   if (irV1 ==LOW) {

    se1.write(90);
   se3.write(90);
    
  
    delay(5);

  }

  //if (irval5 == LOW) {

    //se3.write(80);
    //delay(500);

  //}

  // if (irval6 == LOW) {
    //se3.write(180);
   // delay(500);

 // }
}
