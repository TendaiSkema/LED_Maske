int ledPin = 13;
int state = 0;
int flag = 0;

void setup() {
 pinMode(ledPin,OUTPUT);
 digitalWrite(ledPin,HIGH);

 Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0){
    state = Serial.read();
    Serial.println(state);
    flag = 0;
  }
  if(state == 88){
    digitalWrite(ledPin,LOW);
    //Serial.println("off");
    if(flag == 0){
      flag == 1;
    }
  }
  else if(state == 94){
    digitalWrite(ledPin,HIGH);
    //Serial.println("on");
    if(flag == 0){
      flag = 1;
    }
  }

}
