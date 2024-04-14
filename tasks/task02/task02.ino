#include <TaskManager.h>

int pin3State = LOW;
int pin5State = LOW;
int pin6State = LOW;
int pin9State = LOW;
int pin10State = LOW;


void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  taskManager.schedule(repeatMicros(10000), [] {
    Repeat3();
  });

  taskManager.schedule(repeatMicros(1000), [] {
    Repeat5();
  });

  taskManager.schedule(repeatMicros(500), [] {
    Repeat6();
  });

  taskManager.schedule(repeatMicros(100), [] {
    Repeat9();
  });

  taskManager.schedule(repeatMicros(50), [] {
    Repeat10();
  });
}

void loop() {
  // put your main code here, to run repeatedly:
taskManager.runLoop();
}

void Repeat3(){
  if (pin3State == LOW){
    pin3State = HIGH;
  }
  else{
    pin3State = LOW;
  }
  digitalWrite(3, pin3State);
}

void Repeat5(){
  if (pin5State == LOW){
    pin5State = HIGH;
  }
  else{
    pin5State = LOW;
  }
  digitalWrite(5, pin5State);
}

void Repeat6(){
  if (pin6State == LOW){
    pin6State = HIGH;
  }
  else{
    pin6State = LOW;
  }
  digitalWrite(6, pin5State);
}

void Repeat9(){
  if (pin9State == LOW){
    pin9State = HIGH;
  }
  else{
    pin9State = LOW;
  }
  digitalWrite(9, pin5State);
}

void Repeat10(){
  if (pin10State == LOW){
    pin10State = HIGH;
  }
  else{
    pin10State = LOW;
  }
  digitalWrite(10, pin5State);
}