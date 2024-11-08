char t = 0;
 
void setup() {
pinMode(5,OUTPUT);   //left motors  forward
pinMode(6,OUTPUT);   //left motors reverse
pinMode(7,OUTPUT);   //right  motors forward
pinMode(8,OUTPUT);   //right motors reverse
pinMode(9,OUTPUT);   //Led
Serial.begin(9600);
 
}
 
void loop() {
  digitalWrite(5,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(5,HIGH);
if(Serial.available()>0){
  t = Serial.read();
  Serial.println(t);

  if(t == '0'){            //move  forward(all motors rotate in forward direction)
  digitalWrite(5,HIGH);
  digitalWrite(7,HIGH);
}
}
 
if(t == '0'){            //move  forward(all motors rotate in forward direction)
  digitalWrite(5,HIGH);
  digitalWrite(7,HIGH);
}
 
else if(t == '1'){      //move reverse (all  motors rotate in reverse direction)
  digitalWrite(6,HIGH);
  digitalWrite(8,HIGH);
}
  
else if(t == 'L'){      //turn right (left side motors rotate in forward direction,  right side motors doesn't rotate)
  digitalWrite(7,HIGH);
}
 
else  if(t == 'R'){      //turn left (right side motors rotate in forward direction, left  side motors doesn't rotate)
  digitalWrite(5,HIGH);
}

else if(t ==  'W'){    //turn led on or off)
  digitalWrite(9,HIGH);
}
else if(t == 'w'){
  digitalWrite(9,LOW);
}
 
else if(t == 'S'){      //STOP (all motors stop)
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
}
delay(100);
}
