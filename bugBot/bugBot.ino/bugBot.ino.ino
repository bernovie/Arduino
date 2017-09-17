/*
 Input Pullup Serial

 This example demonstrates the use of pinMode(INPUT_PULLUP). It reads a
 digital input on pin 2 and prints the results to the serial monitor.

 The circuit:
 * Momentary switch attached from pin 2 to ground
 * Built-in LED on pin 13

 Unlike pinMode(INPUT), there is no pull-down resistor necessary. An internal
 20K-ohm resistor is pulled to 5V. This configuration causes the input to
 read HIGH when the switch is open, and LOW when it is closed.

 created 14 March 2012
 by Scott Fitzgerald

 http://www.arduino.cc/en/Tutorial/InputPullupSerial

 This example code is in the public domain

 */

void setup() {
  //start serial connection
  Serial.begin(9600);
  //configure pin2 as an input and enable the internal pull-up resistor
  pinMode(6, INPUT);
  pinMode(3, OUTPUT);
  
  while (! Serial);
  Serial.println("Speed 0 to 255");
}

void loop() {
  //read the pushbutton value into a variable
  int button = digitalRead(6);

  // Keep in mind the pullup means the pushbutton's
  // logic is inverted. It goes HIGH when it's open,
  // and LOW when it's pressed. Turn on pin 13 when the
  // button's pressed, and off when it's not:
 /* if (Serial.available())
  {
    int speed = Serial.parseInt();
    Serial.println(speed);
    if (speed >= 0 && speed <= 255)
    {
      analogWrite(3, speed);
    }
  }*/
  
  if (button == HIGH) {
    digitalWrite(13, LOW);
    digitalWrite(3, HIGH);
    Serial.println("HIGH");
  } else {
    digitalWrite(13, HIGH);
    digitalWrite(3, LOW);
    //Serial.println("LOW");
  }
}



