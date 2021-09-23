
int incomingByte = 0;  // 受信データ用
String str = "";

void setup()
{
  Serial.begin( 9600 );     // シリアル通信を初期化する。通信速度は9600bps
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  on();
  delay(2000);
  off();

}


void loop()
{
  if (Serial.available() > 0)
    { str = Serial.readStringUntil(';'); 
  }

  if(str == "red"){
    Serial.println("RED:defined.");
    digitalWrite(3, HIGH);
   
  } else if(str == "yellow"){
    Serial.println("yellow:defined.");
    digitalWrite(4, HIGH);
   
  } else if(str == "green"){
    Serial.println("green:defined.");
    digitalWrite(5, HIGH);
   
  } else if(str == "blue"){
    Serial.println("blue:defined.");
    digitalWrite(6, HIGH);
   
  } else if(str == "none"){
    Serial.println("none:defined.");
    off();
  } else if(str == "allon"){
    Serial.println("none:defined.");
    allon();
  } else if(str == "alloff"){
    Serial.println("none:defined.");
    alloff();
  } 

  str = "";

}

void on() {
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);

}

void off() {
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
}

void allon() {
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
}

void alloff() {
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
}
