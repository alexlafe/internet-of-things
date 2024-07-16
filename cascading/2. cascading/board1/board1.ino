#include <SoftwareSerial.h> 
SoftwareSerial mySerial(10, 11);

#define led_pin_2 2
#define led_pin_3 3
#define led_pin_4 4
#define led_pin_5 5
#define led_pin_6 6
#define led_pin_7 7
#define led_pin_8 8
#define led_pin_9 9

void low()
{
  digitalWrite(led_pin_2, LOW);
  digitalWrite(led_pin_3, LOW);
  digitalWrite(led_pin_4, LOW);
  digitalWrite(led_pin_5, LOW);
  digitalWrite(led_pin_6, LOW);
  digitalWrite(led_pin_7, LOW);
  digitalWrite(led_pin_8, LOW);
  digitalWrite(led_pin_9, LOW);
}

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600); 
  while (!Serial) { } 
  Serial.println("Начинаем работу!");

  pinMode(led_pin_2, OUTPUT);
  pinMode(led_pin_3, OUTPUT);
  pinMode(led_pin_4, OUTPUT);
  pinMode(led_pin_5, OUTPUT);
  pinMode(led_pin_6, OUTPUT);
  pinMode(led_pin_7, OUTPUT);
  pinMode(led_pin_8, OUTPUT);
  pinMode(led_pin_9, OUTPUT);
}

int first_part;
char second_part;
String number;

void loop() 
{   
  delay(100);
  if (Serial.available() == 2)
  {
    low();

    first_part = Serial.read() - '0';
    second_part = Serial.read();
    Serial.println(first_part);
    Serial.println(second_part);

    mySerial.write(second_part);

    if (first_part == 1)
    {
      digitalWrite(led_pin_9, HIGH);
      digitalWrite(led_pin_4, HIGH);
    }
    else if (first_part == 2)
    {
      digitalWrite(led_pin_2, HIGH);
      digitalWrite(led_pin_3, HIGH);
      digitalWrite(led_pin_7, HIGH);
      digitalWrite(led_pin_8, HIGH);
      digitalWrite(led_pin_9, HIGH);
    }
    else if (first_part == 3)
    {
      digitalWrite(led_pin_3, HIGH);
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_7, HIGH);
      digitalWrite(led_pin_8, HIGH);
      digitalWrite(led_pin_9, HIGH);
    }
    else if (first_part == 4)
    {
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_6, HIGH);
      digitalWrite(led_pin_7, HIGH);
      digitalWrite(led_pin_9, HIGH);
    }
    else if (first_part == 5)
    {
      digitalWrite(led_pin_3, HIGH);
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_6, HIGH);
      digitalWrite(led_pin_7, HIGH);
      digitalWrite(led_pin_8, HIGH);
    }
    else if (first_part == 6)
    {
      digitalWrite(led_pin_2, HIGH);
      digitalWrite(led_pin_3, HIGH);
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_6, HIGH);
      digitalWrite(led_pin_7, HIGH);
      digitalWrite(led_pin_8, HIGH);
    }
    else if (first_part == 7)
    {
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_8, HIGH);
      digitalWrite(led_pin_9, HIGH);
    }
    else if (first_part == 8)
    {
      digitalWrite(led_pin_2, HIGH);
      digitalWrite(led_pin_3, HIGH);
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_6, HIGH);
      digitalWrite(led_pin_7, HIGH);
      digitalWrite(led_pin_8, HIGH);
      digitalWrite(led_pin_9, HIGH);
    }
    else if (first_part == 9)
    {
      digitalWrite(led_pin_3, HIGH);
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_6, HIGH);
      digitalWrite(led_pin_7, HIGH);
      digitalWrite(led_pin_8, HIGH);
      digitalWrite(led_pin_9, HIGH);
    }
    else if (first_part == 0)
    {
      digitalWrite(led_pin_2, HIGH);
      digitalWrite(led_pin_3, HIGH);
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_6, HIGH);
      digitalWrite(led_pin_8, HIGH);
      digitalWrite(led_pin_9, HIGH);
    }
  }
  else if (Serial.available() == 1)
  {
    low();

    first_part = 0;
    second_part = Serial.read();
    
    Serial.println(first_part);
    Serial.println(second_part);

    mySerial.write(second_part);

    if (first_part == 0)
    {
      digitalWrite(led_pin_2, HIGH);
      digitalWrite(led_pin_3, HIGH);
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_6, HIGH);
      digitalWrite(led_pin_8, HIGH);
      digitalWrite(led_pin_9, HIGH);
    }
  }
}
