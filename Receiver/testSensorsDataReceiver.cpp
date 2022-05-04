#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "../test/catch.hpp"
#include "SensorsDataReceiver.h"

TEST_CASE("read sensor data from console") {
  std::vector<SensorsData> sensorsDataHolder = readSensorsDataFromConsole();
  
  REQUIRE(sensorsDataHolder.size() == 50);
  
  struct SensorsData sensorsData;
  sensorsData.temperatureSensorData = 78;
  sensorsData.SOCSensorData = 56;
  sensorsData.chargeRate = 0.97;
  REQUIRE(sensorsDataHolder[44] == sensorsData);
  
  sensorsData.temperatureSensorData = 18;
  sensorsData.SOCSensorData = 95;
  sensorsData.chargeRate = 0.93;
  REQUIRE(sensorsDataHolder[21] == sensorsData);
}


TEST_CASE("validate statistics: Lowest") {
  struct SensorsData sensorsDataReceived = inferLowestValues();
  struct SensorsData sensorsDataExpected;
  sensorsDataExpected.temperatureSensorData = -15;
  sensorsDataExpected.SOCSensorData = -4;
  sensorsData.chargeRate = -0.5;
  REQUIRE(sensorsDataReceived == sensorsDataExpected);
}

TEST_CASE("validate statistics: highest") {
  struct SensorsData sensorsDataReceived = inferHighestValues();
  struct SensorsData sensorsDataExpected;
  sensorsDataExpected.temperatureSensorData = 92;
  sensorsDataExpected.SOCSensorData = 99;
  sensorsData.chargeRate = 1.0;
  REQUIRE(sensorsDataReceived == sensorsDataExpected);
}
