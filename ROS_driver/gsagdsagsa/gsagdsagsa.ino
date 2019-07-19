#define delta_t 0.05

#define EN1 2
#define rpwn1 5//电机正传
#define lpwn1 3//电机反转
#define EN2 4
#define rpwn2 7
#define lpwn2 6
#define EN3 8
#define rpwn3 9//电机正传
#define lpwn3 10//电机反转
#define EN4 13
#define rpwn4 12
#define lpwn4 11
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
Robot_wheel(30,10);
}
void wheel1(int t1) {

  if ( t1 > 0) {
    digitalWrite(EN1, HIGH);
    analogWrite(rpwn1, 0) ;
    analogWrite(lpwn1, t1);
  }
  if (t1 < 0) {
     digitalWrite(EN1, HIGH);
     analogWrite(rpwn1, -t1);
     analogWrite(lpwn1, 0);
   }
   if (t1 == 0) {
        digitalWrite(EN1, HIGH);
        analogWrite(rpwn1, 0);
        analogWrite(lpwn1, 0);
   }
}
void wheel2(int t2) {

  if ( t2 > 0) {
    digitalWrite(EN2, HIGH);
    analogWrite(rpwn2, 0) ;
    analogWrite(lpwn2, t2);
  }
  if (t2 < 0) {
     digitalWrite(EN2, HIGH);
     analogWrite(rpwn2, -t2);
     analogWrite(lpwn2, 0);
   }
   if (t2 == 0) {
        digitalWrite(EN2, HIGH);
        analogWrite(rpwn2, 0);
        analogWrite(lpwn2, 0);
   }
}
void wheel3(int t3) {

  if ( t3 > 0) {
    digitalWrite(EN3, HIGH);
    analogWrite(rpwn3, 0) ;
    analogWrite(lpwn3, t3);
  }
  if (t3 < 0) {
     digitalWrite(EN3, HIGH);
     analogWrite(rpwn3, -t3);
     analogWrite(lpwn3, 0);
   }
   if (t3 == 0) {
        digitalWrite(EN3, HIGH);
        analogWrite(rpwn3, 0);
        analogWrite(lpwn3, 0);
   }
}
void wheel4(int t4) {

  if ( t4 > 0) {
    digitalWrite(EN4, HIGH);
    analogWrite(rpwn4, 0) ;
    analogWrite(lpwn4, t4);
  }
  if (t4 < 0) {
     digitalWrite(EN4, HIGH);
     analogWrite(rpwn4, -t4);
     analogWrite(lpwn4, 0);
   }
   if (t4 == 0) {
        digitalWrite(EN4, HIGH);
        analogWrite(rpwn4, 0);
        analogWrite(lpwn4, 0);
   }
}
void Robot_wheel(int RobotV, int Yawrate){

  
  wheel1(RobotV-Yawrate/delta_t/2);
  wheel2(RobotV+Yawrate/delta_t/2);
  wheel3(RobotV+Yawrate/delta_t/2);
  wheel4(RobotV-Yawrate/delta_t/2);
}
