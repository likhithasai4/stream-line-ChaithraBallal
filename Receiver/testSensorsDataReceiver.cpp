#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "../test/catch.hpp"
#include "SensorsDataReceiver.h"
#include "../BMS_Sender.h"

TEST_CASE("read sensor data from console") {
  sender_BMS();
  std::vector<SensorsData> sensorsDataHolder = readSensorsDataFromConsole();
  
  REQUIRE(sensorsDataHolder.size() == 50);
  
  struct SensorsData sensorsData;
  REQUIRE(sensorsDataHolder[44].temperatureSensorData == 78);
  sensorsData.SOCSensorData = 56;
  sensorsData.chargeRate = 0.97;
  REQUIRE(sensorsDataHolder[44] == sensorsData);
  
  sensorsData.temperatureSensorData = 18;
  sensorsData.SOCSensorData = 95;
  sensorsData.chargeRate = 0.93;
  REQUIRE(sensorsDataHolder[21] == sensorsData);
}
