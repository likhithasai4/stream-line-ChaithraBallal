#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "../test/catch.hpp"
#include "SensorsDataReceiver.h"

TEST_CASE("validate statistics: Lowest") {
  readSensorsDataFromConsole();
  struct SensorsData sensorsDataReceived = inferLowestValues();
  struct SensorsData sensorsDataExpected;
  sensorsDataExpected.temperatureSensorData = -15;
  sensorsDataExpected.SOCSensorData = -4;
  sensorsDataExpected.chargeRate = -0.5;
  REQUIRE(sensorsDataReceived.temperatureSensorData == sensorsDataExpected.temperatureSensorData);
  REQUIRE(sensorsDataReceived == sensorsDataExpected);
}

TEST_CASE("validate statistics: highest") {
  struct SensorsData sensorsDataReceived = inferHighestValues();
  struct SensorsData sensorsDataExpected;
  sensorsDataExpected.temperatureSensorData = 92;
  sensorsDataExpected.SOCSensorData = 99;
  sensorsDataExpected.chargeRate = 1.0;
  REQUIRE(sensorsDataReceived.temperatureSensorData == sensorsDataExpected.temperatureSensorData);
  REQUIRE(sensorsDataReceived == sensorsDataExpected);
}
