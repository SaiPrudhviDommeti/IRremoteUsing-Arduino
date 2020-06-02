#include<IRremote.h>
int IRreadPIN=6;
IRrecv data(IRreadPin);
decode_results value;
int Switch1=13;
int Switch1=12;
int Switch1=11;

void setup() {
  Serial.begin(9600);
  data.enableIRIn();
  pinMode(Switch1,OUTPUT);
}

void loop() {
if (data.decode(&value))
 {Serial.println(value.value);
  delay(10);

  data.resume();
  }
if(value==xxxxxx)  
{digitalWrite(Switch1,HIGH);
  }
if(value==xxxxxx)
{digitalWrite(Switch2,HIGH);
  }
if(value==xxxxxx)
{digitalWrite(Switch3,HIGH);
  }
  
  
}
