// DEFINING PUSH BUTTONS
int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int h = 9;
// DEFINING BUZZER
int buzzer = 13;

void setup()
{
  // DECLARING BUTTON PINS AS INPUT
  pinMode(a,INPUT);
  pinMode(b,INPUT);
  pinMode(c,INPUT);
  pinMode(d,INPUT);
  pinMode(e,INPUT);
  pinMode(f,INPUT);
  pinMode(g,INPUT);
  pinMode(h,INPUT);
  // DECLARING BUTTON AS OUTPUT
  pinMode(buzzer,OUTPUT);
  
}

void loop()
{
  // READ THE VALUES FROM BUTTONS
  int b1 = digitalRead(a);
  int b2 = digitalRead(b);
  int b3 = digitalRead(c);
  int b4 = digitalRead(d);
  int b5 = digitalRead(e);
  int b6 = digitalRead(f);
  int b7 = digitalRead(g);
  int b8 = digitalRead(h);
  
  if( b1 == 1 ){
     tone(buzzer,240,100);
  }
    if( b2 == 1 ){
     tone(buzzer,270,100);
  }
    if( b3 == 1 ){
     tone(buzzer,300,100);
  }
    if( b4 == 1 ){
     tone(buzzer,337.5,100);
  }
    if( b5 == 1 ){
     tone(buzzer,360,100);
  }
    if( b6 == 1 ){
     tone(buzzer,400,100);
  }
    if( b7 == 1 ){
     tone(buzzer,450,100);
  }
    if( b8 == 1 ){
     tone(buzzer,470,100);
  }
  
// short delay for good pitch
  delay(5);
  
  
}