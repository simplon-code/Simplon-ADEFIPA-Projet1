#include <dht.h>

dht DHT;
int ledRouge=9;
int ledVert=10;

#define DHT11_PIN 8

void setup(){
  Serial.begin(9600);
  pinMode(ledRouge, OUTPUT);
  pinMode(ledVert, OUTPUT);
  digitalWrite(ledRouge,LOW);
  digitalWrite(ledVert,LOW);
}

void loop(){
  int chk = DHT.read11(DHT11_PIN);
  Serial.println(DHT.temperature);
  if(DHT.temperature<27){
    digitalWrite(ledVert,HIGH);
    digitalWrite(ledRouge,LOW);
  }else{
    digitalWrite(ledRouge,HIGH);
    digitalWrite(ledVert,LOW);
  }
  delay(5000);
}
