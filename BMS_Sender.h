#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define  No_of_Readings 50
extern void readBMSDataFromFile(float* Temperature, float* SOC, float* ChargeRate);
extern void printOnConsole(float TempPrint, float SOCPrint, float ChargeRatePrint);
extern void sendBMSDataToConsole(float* Temperature, float* SOC, float* ChargeRate);
extern void senderMain_BMS();
