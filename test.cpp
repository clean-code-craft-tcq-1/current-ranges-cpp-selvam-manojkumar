
#include "currentRanges.h"
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include "catch.hpp"



TEST_CASE(" detect the ranges and readings in each range") {
	std::vector<int> currentSamples = { 1, 3, 5, 4, 2,27,29,28,30, 10, 11, 12,99 };
	currentReport* current_Report = new currentReport(currentSamples);
	current_Report->generateGroup();
	current_Report->reportGroup();
  // REQUIRE(current_Report->CurrentGroupData.size() == 4 );
}

TEST_CASE(" detect the ranges and readings in each range") {
	std::vector<int> currentSamples = { 1, 3, 5 };
	currentReport* current_Report = new currentReport(currentSamples);
	current_Report->generateGroup();
	current_Report->reportGroup();
   //REQUIRE(current_Report->CurrentGroupData[0].unitsInGroup == 5);
}
