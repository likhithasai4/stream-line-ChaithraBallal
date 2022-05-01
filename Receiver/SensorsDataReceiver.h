#include<vector>

struct SensorsData{
  float temperatureSensorData;
  float SOCSensorData;
  float chargeRate;
  
  bool operator==(const SensorsData &other) const {
    return ((temperatureSensorData==other.temperatureSensorData) && (SOCSensorData==other.SOCSensorData) && (chargeRate==other.chargeRate));
  }
};

std::vector<SensorsData> readSensorsDataFromConsole();
