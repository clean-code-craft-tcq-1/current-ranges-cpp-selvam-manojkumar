
#include "currentRanges.h"
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <cmath>



void CurrentGroups::init_CurrentGroups(int value) {
	min = value;
	max = value;
	unitsInGroup = 1;
}

std::vector<int> currentReport::sortCurrentSamples(std::vector<int>& samples) {
	sort(samples.begin(), samples.end());
	return samples;
}


currentReport::currentReport(std::vector<int>& samples)
{
	dataSamples = sortCurrentSamples(samples);
}


void currentReport::generateGroup()
{
	CurrentGroups subSet;
	subSet.init_CurrentGroups(dataSamples[0]);
	for (int iter = 1; iter < dataSamples.size(); iter++) {
		if (dataSamples[iter] - dataSamples[iter - 1] < 2) {
			subSet.max = dataSamples[iter];
			subSet.unitsInGroup++;
		}
		else
		{
			CurrentGroupData.push_back(subSet);
			subSet.init_CurrentGroups(dataSamples[iter]);
		}
	}
	CurrentGroupData.push_back(subSet);
}

void currentReport::reportGroup() {

	printf(" Range, Readings \n");
	for(auto sample : CurrentGroupData) {
		printf("%d - %d, %d\n", sample.min, sample.max, sample.unitsInGroup);
	}

}


