#include"iostream"
#include <map>
#include<vector>



typedef class CurrentGroups{

public: 
	int min;
	int max;
	int unitsInGroup;
	void init_CurrentGroups(int value);
};


class currentReport {
private:
	std::vector<int> sortCurrentSamples(std::vector<int>& samples);
public:
	std::vector<CurrentGroups> CurrentGroupData;
	std::vector<int> dataSamples;
	currentReport(std::vector<int>& samples);
	void generateGroup();
	void reportGroup();
	
};



