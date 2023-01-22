
char flamePin =6;         
char soundPin = 7;        
char redLightPin =  8;    
char greenLightPin =9;
char flame = HIGH;


void setup() {
  pinMode(flamePin,INPUT);
  pinMode(soundPin , OUTPUT);
  pinMode(redLightPin,OUTPUT);
  pinMode(greenLightPin,OUTPUT);
  Serial.begin(9600);

}

void loop() {

  flame = digitalRead(flamePin);
  if(flame == LOW){   // if there is a flame in the place | low means positive
    redLightON();
    greenLightOFF();
    Serial.println("Fire Fire Fire !!!");
    soundON();
        
  }
  else{
    Serial.println("OK");
    soundOFF();
    redLightOFF();
    greenLightON();
  }
 
  
}

void soundON(){
  digitalWrite(soundPin , HIGH);
  delay (400);
  digitalWrite(soundPin , LOW);
  delay(300);
}

void soundOFF(){
  digitalWrite(soundPin , LOW);
}

void redLightON(){
  digitalWrite(redLightPin,HIGH);
  
}
void redLightOFF(){
  digitalWrite(redLightPin,LOW);
}

void greenLightON(){
  digitalWrite(greenLightPin,HIGH);
}

void greenLightOFF(){
  digitalWrite(greenLightPin,LOW);
}

