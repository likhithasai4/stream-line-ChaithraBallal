#include<vector>

struct SensorsData{
  float temperatureSensorData;
  float SOCSensorData;
  float chargeRate;
  
  bool operator==(const SensorsData &other) const {
    return ((temperatureSensorData==other.temperatureSensorData) && (SOCSensorData==other.SOCSensorData) && (chargeRate==other.chargeRate));
  }
  
  SensorsData() {
    temperatureSensorData = 0.0;
    SOCSensorData = 0.0;
    chargeRate = 0.0;
  }
};

void readSensorsDataFromConsole();
SensorsData inferLowestValues();
SensorsData inferLowestValues();
/*float getLowestValue(float lhs, float rhs);
float getHighestValue(float lhs, float rhs);*/
