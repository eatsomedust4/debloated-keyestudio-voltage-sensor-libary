the manufactures code is at the link https://docs.keyestudio.com/projects/KS0275/en/latest/docs/KS0275.html

this is the first time I have ever attempted to create an arduino library so while the code works its not clean under the hood so let me know (if your that one person in the history of mankind who actually sees and uses this) if theres any issues with it I guess

in order to use this library create a folder in your arduino librarys folder and create a folder name 'voltageSensor' and then just paste the contents of this github repo in there
but just a quick note
make sure that once this library is pasted into the folder you would want to make sure that the files 'voltageSensor.h' and 'voltageSensor.cpp' are only one folder deep or this library won't work

example code for the library because why the hell not

#include "voltageSensor.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float test = readsensor(A0);
  Serial.println(test);
  delay(500);
}
