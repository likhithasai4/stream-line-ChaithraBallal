#include<vector>

struct SensorsData{
  float temperatureSensorData;
  float SOCSensorData;
  float chargeRate;
  
  bool operator==(const SensorsData &other) const {
     if((temperatureSensorData==other.temperatureSensorData) && (SOCSensorData==other.SOCSensorData) && (chargeRate==other.chargeRate))
        return true;
    else 
     return false;
    }
};

std::vector<SensorsData> readSensorsDataFromConsole();
