#include "voltageSensor.h"

float readsensor(int sensor) {            
    pinMode(sensor, INPUT);

    int val2=0;      //Define variables val2
    int val3=0;     //Define variables val3
    int val4=0;    //Define variables val4

    int val,val5;
    float val1;
    val=analogRead(sensor);     //Read the value of the analog port and assign it to the variable val
    val1=val/3.9;
    val5=(int)val1;
    val3=val5/100;
    val2=(val5%100)/10; //complex spegetti code by keyestudio that no one wants to read (not even keystudio)
    val4=val5%10;
    delay(100);      //delay 0.1 second

    val4 = (float)val4;

    return (val3 * 10) + val2 + (val4 / 10);
}