/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */


int DelayDot = 85;
int DelayDash = DelayDot * 3;
int DelayLetter = DelayDot * 2;
int DelayWord = DelayDot * 7;


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
 // H
 ShowDot(4);
 EndOfLetter();

 // E
ShowDot(1);
EndOfLetter();

 // L
 ShowDot(1);
  ShowDash(1);
  ShowDot(2);
 EndOfLetter();

 // L
ShowDot(1);
  ShowDash(1);
  ShowDot(2);
 EndOfLetter();
 
 // O
 ShowDash(3);
 EndOfLetter();

 EndOfWord();

 // W
ShowDash(1);
ShowDot(2);
ShowDash(1);
EndOfLetter();

 // O
 ShowDash(3);
 EndOfLetter();

 // R
 ShowDot(1);
 ShowDash(1);
 ShowDot(1);
 EndOfLetter();

 // L
 ShowDot(1);
 ShowDash(1);
 ShowDot(2);
 EndOfLetter();

 // D
ShowDash(1);
ShowDot(2);
EndOfWord(); 
}

void ShowDot(int x)
{
  for(int y = 0; y < x; y++)
  {
    tone(8, 500, DelayDot);
    Serial.print(". ");
    digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(DelayDot);              // wait for a second
    digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
    delay(DelayDot);              // wait for a second
  };
}

void ShowDash(int x)
{
  for(int y = 0; y < x; y++)
  {
    tone(8, 500, DelayDash);
    Serial.print("- ");
    digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(DelayDash);              // wait for a second
    digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
    delay(DelayDot);              // wait for a second
  };
}

void EndOfLetter()
{  
  Serial.print(" ");
  delay(DelayLetter);
}

void EndOfWord()
{
 Serial.print("\n");
 delay(DelayWord); 
}

