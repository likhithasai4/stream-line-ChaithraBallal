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
        std::cin >> sensorsData.temperatureSensorData;
        std::cin >> sensorsData.SOCSensorData;
        std::cin >> sensorsData.chargeRate;
        sensorsDataHolder.push_back(sensorsData);
        
      /*sensorsData.temperatureSensorData = atof(input.c_str() + 13);
      sensorsData.SOCSensorData = atof(input.c_str() + 30);
      sensorsData.chargeRate = atof(input.c_str() + 54);
      sensorsDataHolder.push_back();*/
    }
}
