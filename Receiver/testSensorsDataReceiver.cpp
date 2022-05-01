#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "../test/catch.hpp"
#include "Receiver/SensorsDataReceiver.h"

TEST_CASE("read sensor data from console") {
  std::vector<SensorsData> sensorsDataHolder = readSensorsDataFromConsole();
  
  REQUIRE(sensorsDataHolder.size() == 50);
}
