#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "../test/catch.hpp"
#include "SensorsDataReceiver.h"

TEST_CASE("validate statistics: Lowest") {
  readSensorsDataFromConsole();
  struct SensorsData sensorsDataReceived = inferLowestValues();
  
  REQUIRE(sensorsDataReceived.temperatureSensorData == -15);
  REQUIRE(sensorsDataReceived.SOCSensorData == -4);
  REQUIRE(sensorsDataReceived.chargeRate == -0.5);
}

TEST_CASE("validate statistics: highest") {
  struct SensorsData sensorsDataReceived = inferHighestValues();
 
  REQUIRE(sensorsDataReceived.temperatureSensorData == 92);
  REQUIRE(sensorsDataReceived.SOCSensorData == 99);
  REQUIRE(sensorsDataReceived.chargeRate == 1.0);
}
