#include <iostream>
#include <string>
#include <cstdlib>

#include "SensorsDataReceiver.h"

std::vector<SensorsData> readSensorsDataFromConsole() {
    std::vector<SensorsData> sensorsDataHolder;
    SensorsData sensorsData;
    std::string input;
    getline(std::cin, input);
    for(int i = 0; i < 50; i++) {
      sensorsData.temperatureSensorData = atof(numberString.c_str() + 13);
      sensorsData.SOCSensorData = atof(numberString.c_str() + 30);
      sensorsData.chargeRate = atof(numberString.c_str() + 54);
      sensorsDataHolder.push_back();
    }
}
