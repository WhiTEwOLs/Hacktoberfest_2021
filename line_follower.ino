/*------ Arduino Line Follower Code----- */
/*-------definning Inputs------*/
#define LS 3      // left sensor
#define RS 4      // right sensor

/*-------definning Outputs------*/
#define LM1 10       // left motor
#define LM2 11       // left motor
#define RM1 12       // right motor
#define RM2 13       // right motor

void setup()
{
  pinMode(LS, INPUT);
  pinMode(RS, INPUT);
  pinMode(LM1, OUTPUT);
  pinMode(LM2, OUTPUT);
  pinMode(RM1, OUTPUT);
  pinMode(RM2, OUTPUT);
}

void loop()
{
  if(digitalRead(LS) && digitalRead(RS))     // Move Forward
  {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
  }
  
  if(!(digitalRead(LS)) && digitalRead(RS))     // Turn left
  {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, HIGH);
  }
  
  if(digitalRead(LS) && !(digitalRead(RS)))     // turn right
  {
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, HIGH);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
  }
  
  if(!(digitalRead(LS)) && !(digitalRead(RS)))     // stop
  {
    //delay(1000);
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);
  }
}
