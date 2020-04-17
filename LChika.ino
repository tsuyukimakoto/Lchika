#include <M5Stack.h>

int flag = 0;

void setup()
{
    M5.begin();
	pinMode(22, OUTPUT);
    digitalWrite(22, LOW);
    M5.update();
}

void loop()
{
    M5.update();
    if (M5.BtnA.wasReleased()) {
        flag = digitalRead(22)
        if(flag) {
            digitalWrite(22, LOW);
        } else {
            digitalWrite(22, HIGH);
        }
    }
    // delay(1500);
    // flag = digitalRead(22);
    // if(flag) {
    //     digitalWrite(22, LOW);
    // } else {
    //     digitalWrite(22, HIGH);
    // }
}
