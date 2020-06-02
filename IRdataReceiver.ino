#include<IRremote.h>
int IRreadPIN=6;
IRrecv data(IRreadPin);
decode_results value;


void setup() {
  Serial.begin(9600);
  data.enableIRIn();

}

void loop() {
if (data.decode(&value))
 {Serial.println(value.value);
  delay(10);

  data.resume();
  }
}
