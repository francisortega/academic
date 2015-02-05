#include "Map.h"
#include <vector>
#include <stdio.h>
#include <string>

/**
 * Display data
 */
int main(int argc, char*argv[]){
	// Display data
	Map map;
	
	// Get all countries in the world
	std::vector<Map::Country> countries = map.getWorldMap();

	// Display all the countries
	for (int i = 0; i < countries.size(); i++) {
		printf("name: %s id: %i continent: %s\n", countries[i].name.c_str(), countries[i].id, countries[i].continent.c_str());
	}

	// Display all continents and their countries

	// Display adjacency between two countries (sample)

	// Display info of country

	// Display adjacency between two continents

	// Add a player

	/* Add armies (not sure how armies work) - not done */

	system("pause");
}