#include<stdio.h>
#include<wiringPi.h>
#include<unistd.h>

int main(void){
    int i;
    printf("wiring setup..\n");
    i = wiringPiSetupGpio();
    printf("wiring initialized: %d\n", i);

    pinMode(17,OUTPUT);
    pinMode(2,INPUT);

    while(1){        
        sleep(1);
        i = digitalRead(2);
        printf("digitalRead: %d\n", i);
        if(i == HIGH){
            digitalWrite(17, LOW);
        }else{
            digitalWrite(17, HIGH);
        }
    }

    return 0;
}
