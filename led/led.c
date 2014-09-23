#include<stdio.h>
#include<wiringPi.h>
#include <unistd.h>

int main(void){
int i;
printf("wiring setup..\n");
i = wiringPiSetupGpio();
printf("wiring initialized: %d\n", i);

pinMode(17,OUTPUT);

for(i=0; i<99; i++){
printf("Write HIGH\n");
digitalWrite(17,HIGH);
sleep(2);
printf("Write LOW\n");
digitalWrite(17,LOW);
sleep(2);
}


return 0;
}
