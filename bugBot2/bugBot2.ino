void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(7, INPUT);
  int contador = 0;
}

void loop() {
  // put your main code here, to run repeatedly:
  int button = digitalRead(7);
  
  if (Serial.available())
  {
    int speed = Serial.parseInt();
    Serial.println(speed);
    if (speed == 1)
    {
      digitalWrite(6, LOW);
      digitalWrite(5, HIGH);
    }
    if (speed == -1)
    {
      digitalWrite(6, HIGH);
      digitalWrite(5, LOW);
    }
     if (speed == 0)
    {
      digitalWrite(6, LOW);
      digitalWrite(5, LOW);
    }
  }

  if(button == HIGH){
      Serial.println("HIGH");
      digitalWrite(6, LOW);
      digitalWrite(5, HIGH);  
  }
  else {
      digitalWrite(6, LOW);
      digitalWrite(5, LOW); 
  }
  
  
}
