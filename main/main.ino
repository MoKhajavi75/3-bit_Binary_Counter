// 3 Bit Counter, Arduino by MohamadKh75
// 2017-06-26
// ********************


const int First_LED = 3;   //connected to digital pin 13
const int Second_LED = 4;   //connected to digital pin 13
const int Third_LED = 5;   //connected to digital pin 13

void setup()
{
  Serial.begin(9600);   //Set the serial conncetion to check the result in Serial Monitor
  
  pinMode(First_LED, OUTPUT);   //set digital pin as output
  pinMode(Second_LED, OUTPUT);   //set digital pin as output
  pinMode(Third_LED, OUTPUT);   //set digital pin as output
}

void loop()
{
  reset();    //turn ALL LEDs off
  
  for(int i = 0 ; i < 8 ; ++i)
    {
    if ((i>>2) % 2)
      digitalWrite(Third_LED, HIGH);

    if ((i>>1) % 2)
      digitalWrite(Second_LED, HIGH);

    if ((i>>0) % 2)
      digitalWrite(First_LED, HIGH);

    delay(1000);
    Serial.print("Number is = ");
    Serial.print(i);
    Serial.println();

  reset();    //turn ALL LEDs off
    }
    Serial.println();
}

void reset (void)
{
    digitalWrite(First_LED, LOW);
    digitalWrite(Second_LED, LOW);
    digitalWrite(Third_LED, LOW);
}
