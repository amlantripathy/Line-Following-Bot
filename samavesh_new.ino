int S1 = A5, S2 = A4, S3 = A3, S4 = A2, S5 = A1 , S6 = A0, S7 = 2, S8 = 4;
int v1, v2, v3, v4, v5, v6, v7, v8;
int L1 = 3, L2 = 5;
int R1 = 9, R2 =10;
int max_speed = 150;
void setup() {
  // put your setup code here, to run once:
   pinMode(L1,OUTPUT);
   pinMode(L2,OUTPUT);
   pinMode(R1,OUTPUT);
   pinMode(R2,OUTPUT);  
  
   pinMode(S1,INPUT);
   pinMode(S2,INPUT);
   pinMode(S3,INPUT);
   pinMode(S4,INPUT);
   pinMode(S5,INPUT);
   pinMode(S6,INPUT);
   pinMode(S7,INPUT);
   pinMode(S8,INPUT);
 
   Serial.begin(9600);
}
   
int readline()
 {
  v1=digitalRead(S1);
  v2=digitalRead(S2);
  v3=digitalRead(S3);
  v4=digitalRead(S4); 
  v5=digitalRead(S5);
  v6=digitalRead(S6);
  v7=digitalRead(S7);
  v8=digitalRead(S8);
  Serial.print(v1);
    Serial.print(v2);
    Serial.print(v3);
    Serial.print(v4);
    Serial.print(v5);
    Serial.print(v6);
    Serial.print(v7);
    Serial.print(v8);
    Serial.println();
 }
    

    
void forward()
{
  analogWrite(L1,max_speed);
  analogWrite(L2,0);
  analogWrite(R1,max_speed);
  analogWrite(R2,0);
}

void hardleft()
{
  analogWrite(L1,0);
  analogWrite(L2,max_speed);
  analogWrite(R1,max_speed);
  analogWrite(R2,0);
}

void hardright()
{
  analogWrite(L1,max_speed);
  analogWrite(L2,0);
  analogWrite(R1,0);
  analogWrite(R2,max_speed);
}

void stp()
{
  analogWrite(L1,0);
  analogWrite(L2,0);
  analogWrite(R1,0);
  analogWrite(R2,0);
}

void backward()
{
  analogWrite(L1,0);
  analogWrite(L2,max_speed);
  analogWrite(R1,0);
  analogWrite(R2,max_speed);
}

void left()
{
  analogWrite(L1,0);
  analogWrite(L2,0);
  analogWrite(R1,max_speed);
  analogWrite(R2,0);
}

void softleft()
{
  analogWrite(L1,20);
  analogWrite(L2,0);
  analogWrite(R1,max_speed);
  analogWrite(R2,0);
}

void right()
{
  analogWrite(L1,max_speed);
  analogWrite(L2,0);
  analogWrite(R1,0);
  analogWrite(R2,0);
}

void softright()
{
  analogWrite(L1,max_speed);
  analogWrite(L2,0);
  analogWrite(R1,20);
  analogWrite(R2,0);
}
void loop() {
  // put your main code here, to run repeatedly:
  if(s1==1&&s2==1&&s3==1&&s4==0&&s5==0&&s6==1&&s7==1&&s8==10)
  forward();
  elseif(s1==1&&s2==1&&s3==1&&s4==0&&s5==0&&s6==0&&s7==1&&s8==1)
  right();
  elseif(s1==1&&s2==1&&s3==0&&s4==0&&s5==0&&s6==1&&s7==1&&s8==1)
  left();
  elseif(s1==1&&s2==1&&s3==1&&s4==0&&s5==0&&s6==0&&s7==0&&s8==0)
  forward();
  delay(100);
  hardright();
  delay(680);
  elseif(s1==0&&s2==0&&s3==0&&s4==0&&s5==0&&s6==1&&s7==1&&s8==1)
  forward();
  delay(100);
  hardleft();
  delay(680);
  else
  if(s1==1&&s2==1&&s3==1&&s4==1&&s5==1&&s6==1&&s7==1&&s8==1)
  forward();
  delay(1000);
}
