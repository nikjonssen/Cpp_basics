#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;

struct CityRecord {
	string Name;
	int32_t Population;
	string Location;
};

int main()
{
	// unordered map (hash table)
	unordered_map<string, CityRecord> cityMap;
	cityMap["Melbourne"] = CityRecord{ "Melbourne", 5000000, "2.9w 2.5s" };
	cityMap["Sydney"] = CityRecord{ "Sydney", 5100000, "1.9w 1.5s" };
	cityMap["Canberra"] = CityRecord{ "Canberra", 400000, "3.9w 3.5s" };

	// ordered map (self-balancing binary tree)
	map<string, CityRecord> cityMapOrdered;
	cityMapOrdered["Berlin"] = CityRecord{ "Berlin", 4000000, "2.9w 2.5s" };
	cityMapOrdered["Glasgow"] = CityRecord{ "Glasgow", 3100000, "1.9w 1.5s" };
	cityMapOrdered["Dublin"] = CityRecord{ "Dublin", 700000, "3.9w 3.5s" };
	cityMapOrdered["Cork"] = CityRecord{ "Cork", 750000, "5.9w 5.5s" };

	// retrieve data
	CityRecord& sydneyData = cityMap["Sydney"];  // (!) will insert new "Sydney" key if there is none
	cout << sydneyData.Name << sydneyData.Population << sydneyData.Location << "\n";
	
	CityRecord& melbourneData = cityMap.at("Melbourne");  // will not insert any new key
	cout << melbourneData.Name << melbourneData.Population << melbourneData.Location << "\n";
	cout << "\n";

	// delete data
	cityMapOrdered.erase("Berlin");

	// loop though data
	for (auto& [name, city] : cityMap)
		cout << "Record: " << name << "; Population: " << city.Population << "\n";
	cout << "\n";
	for (auto& [name, city] : cityMapOrdered)
		cout << "Ordered Record: " << name << "; Population: " << city.Population << "\n";
}