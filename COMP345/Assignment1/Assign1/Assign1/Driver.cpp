#include "Map.h"
#include <vector>
#include <stdio.h>
#include <string>

int main(int argc, char*argv[]){
	// Map instance
	Map map;
	
	// Get all countries in the world
	std::vector<Map::Country> countries = map.getWorldMap();

	// Display all the countries
	for (int i = 0; i < countries.size(); i++) {
		printf("name: %s id: %i continent: %s\n", countries[i].name.c_str(), countries[i].id, countries[i].continent.c_str());
	}

	// Display a continent and all its countries
	std::vector<Map::Country> countriesByContinent = map.getCountriesOfContinents("North America");
	
	// Display all the countries
	printf("\n\nCountries in the continent of %s \n", "North America");
	for (int i = 1; i <= countriesByContinent.size(); i++) {
		//printf("\t%i %s\n", i, countriesByContinent[i].name.c_str());
	}

	// Display if two countries are adjacent (sample)
	printf("\n\nIs Quebec and Greenland adjacent: ");
	if (map.isAdjacent("Quebec", "Greenland")) {
		printf("true \n");
	}
	else {
		printf("false \n");
	}

	printf("\nIs Quebec and China adjacent: ");
	if (map.isAdjacent("Quebec", "China")) {
		printf("true \n");
	}
	else {
		printf("false \n");
	}

	// Display if two countries are adjacent (sample)

	// Add a player
	map.addPlayerToCountry("Quebec", "Player1");

	// Display info of country (it belongs to only one continent)
	Map::Country country = map.get("Quebec");
	printf("\n\More information about %s \n", "Quebec");
	printf("Name: %s id: %i continent: %s player: %s\n ", country.name.c_str(), country.id, country.continent.c_str(), country.player.c_str());

	/* Add armies (not sure how armies work) - not done 
	addArmiesToCountry();
	*/

	system("pause");
}