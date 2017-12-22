
int led =13;
int red = 10;
int red1 = 8;
int red2 = 4;
int yellow = 3;
int yellow1 = 9;
int yellow2 = 6;
int green = 5;
int green1 = 7;
int green2 = 2;




void setup() {
  pinMode(red, OUTPUT);
  pinMode(red1, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(led,OUTPUT);

  Serial.begin(9600);
  Serial1.begin(9600);
}

void loop() {

  if (Serial1.available())
  {
    char data = Serial1.read();
    Serial.println(data);
    switch (data)
    {
      case 'R':
        digitalWrite(red, HIGH);
        digitalWrite(red1, HIGH);
        digitalWrite(green2, HIGH);
        digitalWrite(led,HIGH);
        digitalWrite(red2,LOW);
        digitalWrite(green1,LOW);
        digitalWrite(yellow,LOW);
        digitalWrite(yellow1,LOW);
        digitalWrite(yellow2,LOW);
        digitalWrite(green,LOW);
        break;

     // case '0':
       // digitalWrite(red, LOW);
       // digitalWrite(red1, LOW);
       // digitalWrite(red2, LOW);
        //digitalWrite(led, LOW);
        //break;

      case'G':
        digitalWrite(red, HIGH);
        digitalWrite(green, HIGH);
        digitalWrite(red2, HIGH);
        digitalWrite(led,LOW);
        digitalWrite(red1,LOW);
        digitalWrite(green1,LOW);
        digitalWrite(green2,LOW);
        digitalWrite(yellow,LOW);
        digitalWrite(yellow1,LOW);
        digitalWrite(yellow2,LOW);
        break;

      //case '9':
        //digitalWrite(green, LOW);
        //digitalWrite(green1, LOW);
        //igitalWrite(green2, LOW);
        //digitalWrite(led, LOW);
        //break;

      case 'Y':
        digitalWrite(green1, HIGH);
        digitalWrite(red1, HIGH);
        digitalWrite(red2, HIGH);
        digitalWrite(led, HIGH);
        digitalWrite(red,LOW);
        digitalWrite(green,LOW);
        digitalWrite(green2,LOW);
        digitalWrite(yellow,LOW);
        digitalWrite(yellow1,LOW);
        digitalWrite(yellow2,LOW);
        break;

      //case '2':
        //digitalWrite(yellow, LOW);
        //digitalWrite(yellow1, LOW);
        //digitalWrite(yellow2, LOW);
        //digitalWrite(led, LOW);
        //break;

    }

  }


}

