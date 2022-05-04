#include <iostream>
#include <string>
#include <cstdlib>

#include "SensorsDataReceiver.h"
std::vector<SensorsData> sensorsDataHolder;

void readSensorsDataFromConsole() {
    SensorsData sensorsData;
    std::string input;
    getline(std::cin, input);
    std::cout<<input<<std::endl;
    for(int i = 0; i < 50; i++) {
        std::cin >> sensorsData.temperatureSensorData;
        std::cin >> sensorsData.SOCSensorData;
        std::cin >> sensorsData.chargeRate;
        
        std::cout<< sensorsData.temperatureSensorData<<" ";
        std::cout<< sensorsData.SOCSensorData<<" ";
        std::cout<< sensorsData.chargeRate<<" "<<std::endl;
        
        sensorsDataHolder.push_back(sensorsData);
    }
}

SensorsData inferLowestValues() {
    SensorsData sensorsData;
    for(SensorsData data : sensorsDataHolder) {
        sensorsData.temperatureSensorData = getLowestValue(sensorsData.temperatureSensorData, data.temperatureSensorData);
        sensorsData.SOCSensorData = getLowestValue(sensorsData.SOCSensorData, data.SOCSensorData);
        sensorsData.temperatureSensorData = getLowestValue(sensorsData,temperatureSensorData > data.temperatureSensorData);
    }
    return sensorsData;
}

SensorsData inferHighestValues() {
    SensorsData sensorsData;
    for(SensorsData data : sensorsDataHolder) {
        sensorsData.temperatureSensorData = getHighestValue(sensorsData.temperatureSensorData, data.temperatureSensorData);
        sensorsData.SOCSensorData = getHighestValue(sensorsData.SOCSensorData, data.SOCSensorData);
        sensorsData.temperatureSensorData = getHighestValue(sensorsData,temperatureSensorData > data.temperatureSensorData);
    }
    return sensorsData;
}

float getLowestValue(float lhs, float rhs) {
    return (lhs<rhs)?lhs:rhs;
}

float getHighestValue(float lhs, float rhs) {
    return (lhs>rhs)?lhs:rhs;
}
