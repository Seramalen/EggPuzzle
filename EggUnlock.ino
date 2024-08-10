//This is defining the egg sensors, which are essentially just buttons,
//and the leds for each egg as well
int eggOne = 10;
int eggTwo = 11;
int eggThree = 12;
int eggFour = 13;
int ledOne = 9;
int ledTwo = 8;
int ledThree = 7;
int ledFour = 6;
int lock = 5;
void setup()
{
  pinMode(13, INPUT);
  pinMode(13, HIGH);
  pinMode(12, INPUT);
  pinMode(12,HIGH);
  pinMode(11, INPUT);
  pinMode(11, HIGH);
  pinMode(10, INPUT);
  pinMode(10, HIGH);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  //check if egg is in place, turn on corresponding led
  if(digitalRead(eggOne) == HIGH) {
    digitalWrite(ledOne, HIGH);
    } else if (digitalRead(eggOne) == LOW) {
      digitalWrite(ledOne, LOW);
      }

        //check if egg is in place, turn on corresponding led
        if(digitalRead(eggTwo) == HIGH) {
    digitalWrite(ledTwo, HIGH);
    } else if (digitalRead(eggTwo) == LOW) {
      digitalWrite(ledTwo, LOW);
      }

        //check if egg is in place, turn on corresponding led
        if(digitalRead(eggThree) == HIGH) {
    digitalWrite(ledThree, HIGH);
    } else if (digitalRead(eggThree) == LOW) {
      digitalWrite(ledThree, LOW);
      }

        //check if egg is in place, turn on corresponding led
        if(digitalRead(eggFour) == HIGH) {
    digitalWrite(ledFour, HIGH);
    } else if (digitalRead(eggFour) == LOW) {
      digitalWrite(ledFour, LOW);
      }


      //If all eggs are in place, unlock the mag lock to the blood vials
      if(digitalRead(eggOne) == HIGH && digitalRead(eggTwo) == HIGH && digitalRead(eggThree) == HIGH && digitalRead(eggFour) == HIGH) {
        digitalWrite(lock, HIGH);
        } else {
          digitalWrite(lock, LOW);
          }
}
