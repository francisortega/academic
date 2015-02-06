/**
 *
 * @author  Francis Ortega 1295578
 * @date    02-05-2015
 * @version Assignment 1
 *
 * Driver
 *
 * Initializes the Map class and starts the map functions
 *
 */

#pragma once

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

	printf("\nCountries in the continent of %s \n", "North America");
	for (int i = 0; i < countriesByContinent.size(); i++) {
		printf("\t%i %s\n", i + 1, countriesByContinent[i].name.c_str());
	}

	// Display if two countries are adjacent (sample)
	printf("\nAre Quebec and Greenland adjacent? ");
	std::string resultCountries1 = map.isAdjacent("Quebec", "Greenland") ? "true" : "false";
	printf("%s \n", resultCountries1.c_str());

	printf("Are Quebec and China adjacent? ");
	std::string resultCountries2 = map.isAdjacent("Quebec", "China") ? "true" : "false";
	printf("%s \n", resultCountries2.c_str());

	// Display if two countries are adjacent (sample)
	printf("\nIs North America connected to South America? ");
	std::string resultContinents1 = map.areContinentsAdjacent("North America", "South America") ? "true" : "false";
	printf("%s \n", resultContinents1.c_str());

	printf("Is North America connected to Australia? ");
	std::string resultContinents2 = map.areContinentsAdjacent("North America", "Australia") ? "true" : "false";
	printf("%s \n", resultContinents2.c_str());

	// Add a player
	map.addPlayerToCountry("Quebec", "Player1");

	// Display info of country (it belongs to only one continent)
	Map::Country country = map.get("Quebec");
	printf("\nMore information about %s \n", "Quebec");
	printf("\t Name: %s \n\t ID: %i \n\t Continent: %s \n\t Player: %s\n ", country.name.c_str(), country.id, country.continent.c_str(), country.player.c_str());

	// Display all adjacent countries of a country
	std::vector<Map::Country> connectedCountries = map.getAdjacentCountries("Quebec");

	printf("\nCountries connected to %s \n", "Quebec");
	for (int i = 0; i < connectedCountries.size(); i++) {
		printf("\t%i %s\n", i + 1, connectedCountries[i].name.c_str());
	}

	/* Add armies (not sure how armies work) - not done
	addArmiesToCountry();
	*/

	system("pause");
}