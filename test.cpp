
#include "currentRanges.h"
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <assert.h>


int main()
{
	std::vector<int> currentSamples = { 1, 3, 5, 4, 2,27,29,28,30, 10, 11, 12,99 };
	currentReport* current_Report = new currentReport(currentSamples);
	current_Report->generateGroup();
	current_Report->reportGroup();
	assert(current_Report->CurrentGroupData.size() == 4);
   	return 0;
}
