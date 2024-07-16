//Arduino 2×2 L3d cube program code:-)
//#projectsplaner

int ledpins[] = {2,3,4,5};
int groundpins[] = {10,8};
void setup ()
{
  for(int i = 0; i < 4; i++)
  {       
      pinMode(ledpins[i],OUTPUT);
  }                         
  for (int i= 0; i<2; i++)
  {pinMode(groundpins[i],OUTPUT);}

}

void loop()
{
twist();
drop();
diagonal();
}

void twist()
{
  int delaytime=100;
   digitalWrite(groundpins[0], HIGH);
    delay(100);   
  digitalWrite(ledpins[0], HIGH); 
  delay(delaytime);               
  digitalWrite(ledpins[1], HIGH); 
  delay(delaytime);               
  digitalWrite(ledpins[2], HIGH); 
  delay(delaytime);               
  digitalWrite(ledpins[3], HIGH);
  delay(delaytime);
 
   digitalWrite(ledpins[0], LOW); 
  delay(delaytime);               
  digitalWrite(ledpins[1], LOW); 
  delay(delaytime);               
  digitalWrite(ledpins[2], LOW); 
  delay(delaytime);               
  digitalWrite(ledpins[3], LOW); 
delay(delaytime);
digitalWrite(groundpins[0], LOW);




digitalWrite(groundpins[1], HIGH);
    delay(100);   
  digitalWrite(ledpins[1], HIGH); 
  delay(delaytime);               
  digitalWrite(ledpins[2], HIGH); 
  delay(delaytime);               
  digitalWrite(ledpins[3], HIGH); 
  delay(delaytime);               
  digitalWrite(ledpins[0], HIGH);
  delay(delaytime);
 
   digitalWrite(ledpins[1], LOW); 
  delay(delaytime);               
  digitalWrite(ledpins[2], LOW); 
  delay(delaytime);               
  digitalWrite(ledpins[3], LOW); 
  delay(delaytime);               
  digitalWrite(ledpins[0], LOW); 
  delay(delaytime);
  digitalWrite(groundpins[1], LOW);
 
 
  digitalWrite(groundpins[0], HIGH);
    delay(100);   
  digitalWrite(ledpins[2], HIGH); 
  delay(delaytime);               
  digitalWrite(ledpins[3], HIGH); 
  delay(delaytime);               
  digitalWrite(ledpins[0], HIGH);
  delay(delaytime);               
  digitalWrite(ledpins[1], HIGH);
  delay(delaytime);
 
  digitalWrite(ledpins[2], LOW); 
  delay(delaytime);               
  digitalWrite(ledpins[3], LOW); 
  delay(delaytime);               
  digitalWrite(ledpins[0], LOW); 
  delay(delaytime);               
  digitalWrite(ledpins[1], LOW); 
  delay(delaytime);
  digitalWrite(groundpins[0], LOW);
 
  digitalWrite(groundpins[1], HIGH);
    delay(100);   
  digitalWrite(ledpins[3], HIGH); 
  delay(delaytime);               
  digitalWrite(ledpins[0], HIGH); 
  delay(delaytime);               
  digitalWrite(ledpins[1], HIGH); 
  delay(delaytime);               
  digitalWrite(ledpins[2], HIGH);
  delay(delaytime);
 
  digitalWrite(ledpins[3], LOW); 
  delay(delaytime);               
  digitalWrite(ledpins[0], LOW); 
  delay(delaytime);               
  digitalWrite(ledpins[1], LOW); 
  delay(delaytime);               
  digitalWrite(ledpins[2], LOW); 
  delay(delaytime);
  digitalWrite(groundpins[1], LOW);
}

void drop()
{
  int dtime = 75;
  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpins[0], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1],HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpins[0], LOW);
 
  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpins[1], LOW);
 
  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpins[2], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpins[2], LOW);
 
   digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpins[3], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpins[3], LOW);
 
 
  //second time down
  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpins[0], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1],HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpins[0], LOW);
 
  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpins[1], LOW);
 
  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpins[2], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpins[2], LOW);
 
   digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpins[3], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpins[3], LOW);
 
 
}

void diagonal()
{
int dtime= 100;
//bottom pin 0 on
digitalWrite(groundpins[1], HIGH);
digitalWrite(ledpins[0], HIGH);
delay(dtime);
//bottom pin 0 off
digitalWrite(groundpins[1], LOW);
digitalWrite(ledpins[0], LOW);
delay(dtime);
//top pin 1 on
digitalWrite(groundpins[0], HIGH);
digitalWrite(ledpins[1], HIGH);
delay(dtime);
//top pin 1 off
digitalWrite(groundpins[0], LOW);
digitalWrite(ledpins[1], LOW);
//bottom pin 2 on
digitalWrite(groundpins[1], HIGH);
digitalWrite(ledpins[2], HIGH);
delay(dtime);
//bottom pin 2 off
digitalWrite(groundpins[1], LOW);
digitalWrite(ledpins[2], LOW);
  //top pin 3 on
digitalWrite(groundpins[0], HIGH);
digitalWrite(ledpins[3], HIGH);
delay(dtime);
//top pin 3 off
digitalWrite(groundpins[0], LOW);
digitalWrite(ledpins[3], LOW);





//top pin 0 on
digitalWrite(groundpins[0], HIGH);
digitalWrite(ledpins[0], HIGH);
delay(dtime);
//top pin 0 off
digitalWrite(groundpins[0], LOW);
digitalWrite(ledpins[0], LOW);
delay(dtime);
//bottom pin 1 on
digitalWrite(groundpins[1], HIGH);
digitalWrite(ledpins[1], HIGH);
delay(dtime);
//bottom pin 1 off
digitalWrite(groundpins[1], LOW);
digitalWrite(ledpins[1], LOW);
//top pin 2 on
digitalWrite(groundpins[0], HIGH);
digitalWrite(ledpins[2], HIGH);
delay(dtime);
//top pin 2 off
digitalWrite(groundpins[0], LOW);
digitalWrite(ledpins[2], LOW);
  //bottom pin 3 on
digitalWrite(groundpins[1], HIGH);
digitalWrite(ledpins[3], HIGH);
delay(dtime);
//bottom pin 3 off
digitalWrite(groundpins[1], LOW);
digitalWrite(ledpins[3], LOW);

}
