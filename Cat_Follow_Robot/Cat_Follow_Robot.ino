#include <Adafruit_MotorShield.h>


//Arduino Cat Following Robot
// Created By T. Elfrink and J. vanBruggen
// Install libraries AFMotor
// Create the motor shield object with the default I2C address
Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 

// Select which 'port' M1, M2, M3 or M4. In this case, M1
Adafruit_DCMotor *motor1 = AFMS.getMotor(1);
Adafruit_DCMotor *motor2 = AFMS.getMotor(2);
Adafruit_DCMotor *motor3 = AFMS.getMotor(3);
Adafruit_DCMotor *motor4 = AFMS.getMotor(4);

void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Adafruit Motorshield v2 - DC Motor test!");

  AFMS.begin();  // create with the default frequency 1.6KHz
  //AFMS.begin(1000);  // OR with a different frequency, say 1KHz
};


void loop() {
  // put your main code here, to run repeatedly:
  fullStop();
  delay(1000);
  
  motor1->setSpeed(30);
  motor1->run(FORWARD);
  motor2->setSpeed(30);
  motor2->run(FORWARD);
  motor3->setSpeed(30);
  motor3->run(FORWARD);
  motor4->setSpeed(30);
  motor4->run(FORWARD);
};
//
//void applyMovementVector(int speedPercentage, int steeringAngle)

void fullStop(){
  motor1->run(RELEASE);
  motor2->run(RELEASE);
  motor3->run(RELEASE);
  motor4->run(RELEASE);
}
