void setup() {
  // put your setup code here, to run once:
  DDRD = DDRD | B01101000; 
  DDRB = DDRB | B00000110;       // назначает выводы Arduino 1-7 выходными, вывод 0- входным
}

bool state3 = false;
bool state5 = false;
bool state6 = false;
bool state9 = false;
bool state10 = false;
const unsigned long interval_3 = 100000;
const unsigned long interval_5 = 1000;
const unsigned long interval_6 = 500;
const unsigned long interval_9 = 100;
const unsigned long interval_10 = 50;
unsigned long prev3 = 0;
unsigned long prev5 = 0;
unsigned long prev6 = 0;
unsigned long prev9 = 0;
unsigned long prev10 = 0;
unsigned long time = 0;
void loop() {
  time = micros();

  if (abs(time - prev3) > interval_3) {
    if(state3) {
      PORTD |= 1 << 3;
    }
    else {
      PORTD &= ~(1 << 3);
    }
    state3 = !state3;
    prev3 = time;
  }
  if (abs(time - prev5) > interval_5) {
    if(state5) {
      PORTD |= 1 << 5;
    }
    else {
      PORTD &= ~(1 << 5);
    }
    state5 = !state5;
    prev5 = time;
  }
  if (abs(time - prev6) > interval_6) {
    if(state6) {
      PORTD |= 1 << 6;
    }
    else {
      PORTD &= ~(1 << 6);
    }
    state6 = !state6;
    prev6 = time;
  }
  if (abs(time - prev9) > interval_9) {
    if(state9) {
      PORTB |= 1 << 1;
    }
    else {
      PORTB &= ~(1 << 1);
    }
    state9 = !state9;
    prev9 = time;
  }
    if (abs(time - prev10) > interval_10) {
    if(state10) {
      PORTB |= 1 << 2;
    }
    else {
      PORTB &= ~(1 << 2);
    }
    state10 = !state10;
    prev10 = time;
  }
}