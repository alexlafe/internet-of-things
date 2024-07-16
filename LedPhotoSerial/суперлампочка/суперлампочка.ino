#define btn_pin 12
#define led_pin_2 2
#define led_pin_3 3
#define led_pin_4 4
#define led_pin_5 5
#define led_pin_6 6
#define led_pin_7 7
#define led_pin_8 8
#define led_pin_9 9

void turnoff()
{
  digitalWrite(led_pin_2, LOW);
  digitalWrite(led_pin_3, LOW);
  digitalWrite(led_pin_4, LOW);
  digitalWrite(led_pin_6, LOW);
  digitalWrite(led_pin_7, LOW);
  digitalWrite(led_pin_8, LOW);
  digitalWrite(led_pin_5, LOW);
}

int val_max = 0;
int val_min = 1024;

void setup() {
  Serial.begin(9600);
  pinMode(btn_pin, INPUT);
  pinMode(led_pin_2, OUTPUT);
  pinMode(led_pin_3, OUTPUT);
  pinMode(led_pin_4, OUTPUT);
  pinMode(led_pin_5, OUTPUT);
  pinMode(led_pin_6, OUTPUT);
  pinMode(led_pin_7, OUTPUT);
  pinMode(led_pin_8, OUTPUT);
  pinMode(led_pin_9, OUTPUT);
}

bool val_last = 1;
bool val = 1;

int count = 0;
int time = 0;

void loop() {
  val_last = val;
  val = digitalRead(btn_pin);

  // Serial.println(val);
  delay(100);
  if (val == 0 && val_last == 1)
  {
    count++;
  }
  if (val == 1 && val_last == 1)
  {
    time++;
    Serial.println(time / 3);
    delay(1000);
  }

  if (val == 0 && val_last == 0)
  {
    if (time / 3 == 0)
    {
      turnoff();
      digitalWrite(led_pin_5, HIGH);
      digitalWrite(led_pin_3, HIGH);
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_6, HIGH);
      digitalWrite(led_pin_7, HIGH);
      digitalWrite(led_pin_8, HIGH);
    }
    else if (time / 3 == 1)
    {
      turnoff();
      digitalWrite(led_pin_6, HIGH);
      digitalWrite(led_pin_7, HIGH);
    }
    else if (time / 3 == 2)
    {
      turnoff();
      digitalWrite(led_pin_2, HIGH);
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_5, HIGH);
      digitalWrite(led_pin_7, HIGH);
      digitalWrite(led_pin_8, HIGH);
    }
    else if (time / 3 == 3)
    {
      turnoff();
      digitalWrite(led_pin_2, HIGH);
      digitalWrite(led_pin_5, HIGH);
      digitalWrite(led_pin_6, HIGH);
      digitalWrite(led_pin_7, HIGH);
      digitalWrite(led_pin_8, HIGH);
    }
    else if (time / 3 == 4)
    {
      turnoff();
      digitalWrite(led_pin_2, HIGH);
      digitalWrite(led_pin_6, HIGH);
      digitalWrite(led_pin_3, HIGH);
      digitalWrite(led_pin_7, HIGH);
    }
    else if (time / 3 == 5)
    {
      turnoff();
      digitalWrite(led_pin_3, HIGH);
      digitalWrite(led_pin_5, HIGH);
      digitalWrite(led_pin_6, HIGH);
      digitalWrite(led_pin_8, HIGH);
      digitalWrite(led_pin_2, HIGH);
    }
    else if (time / 3 == 6)
    {
      turnoff();
      digitalWrite(led_pin_2, HIGH);
      digitalWrite(led_pin_3, HIGH);
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_5, HIGH);
      digitalWrite(led_pin_6, HIGH);
      digitalWrite(led_pin_8, HIGH);
    }
    else if (time / 3 == 7)
    {
      turnoff();
      digitalWrite(led_pin_8, HIGH);
      digitalWrite(led_pin_6, HIGH);
      digitalWrite(led_pin_7, HIGH);
    }
    else if (time / 3 == 8)
    {
      turnoff();
      digitalWrite(led_pin_2, HIGH);
      digitalWrite(led_pin_3, HIGH);
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_6, HIGH);
      digitalWrite(led_pin_7, HIGH);
      digitalWrite(led_pin_8, HIGH);
      digitalWrite(led_pin_5, HIGH);
    }
    else if (time / 3 == 9)
    {
      turnoff();
      digitalWrite(led_pin_3, HIGH);
      digitalWrite(led_pin_2, HIGH);
      digitalWrite(led_pin_6, HIGH);
      digitalWrite(led_pin_7, HIGH);
      digitalWrite(led_pin_8, HIGH);
      digitalWrite(led_pin_5, HIGH);
    }
    else if (time / 3 == 10)
    {
      turnoff();
      digitalWrite(led_pin_5, HIGH);
      digitalWrite(led_pin_3, HIGH);
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_6, HIGH);
      digitalWrite(led_pin_7, HIGH);
      digitalWrite(led_pin_8, HIGH);
    }
  }
}