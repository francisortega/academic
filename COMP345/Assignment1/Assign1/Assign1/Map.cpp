/**
 *
 * @author Francis Ortega 1295578
 * @version 02-05-15
 * @version Assignment 1
 *
 * Map Functions
 *
 * Defines all the necessary functions needed for the Map class
 *
 */

#include "Map.h"
#include <string>
#include <vector>
#include <stdio.h>

/**
 * Map
 *   
 * Class constructor - adds all the countries including their adjacency
 */
Map::Map() {
	/* Add country for North America */
	std::string na = "North America";
	addCountry(0, "Alaska", na);
	addCountry(1, "Alberta", na);
	addCountry(2, "Central America", na);
	addCountry(3, "Eastern United States", na);
	addCountry(4, "Greenland", na);
	addCountry(5, "Northwest Territory", na);
	addCountry(6, "Ontario", na);
	addCountry(7, "Quebec", na);
	addCountry(8, "Western United States", na);

	/* Add country for South America */
	std::string sa = "South America";
	addCountry(9, "Argentina", sa);
	addCountry(10, "Brazil", sa);
	addCountry(11, "Peru", sa);
	addCountry(12, "Venezuela", sa);

	/* Add country for Europe */
	std::string eu = "Europe";
	addCountry(13, "Great Britain", eu);
	addCountry(14, "Iceland", eu);
	addCountry(15, "Northern Europe", eu);
	addCountry(16, "Scandinavia", eu);
	addCountry(17, "Southern Europe", eu);
	addCountry(18, "Ukraine", eu);
	addCountry(19, "Western Europe", eu);

	/* Add country for Africa */
	std::string af = "Africa";
	addCountry(20, "Congo", af);
	addCountry(21, "East Africa", af);
	addCountry(22, "Egypt", af);
	addCountry(23, "Madagascar", af);
	addCountry(24, "North Africa", af);
	addCountry(25, "South Africa", af);

	/* Add country for Africa */
	std::string as = "Asia";
	addCountry(26, "Afghanistan", as);
	addCountry(27, "China", as);
	addCountry(28, "India", as);
	addCountry(29, "Irkutsk", as);
	addCountry(30, "Japan", as);
	addCountry(31, "Kamchatka", as);
	addCountry(32, "Middle East", as);
	addCountry(33, "Mongolia", as);
	addCountry(34, "Siam", as);
	addCountry(35, "Siberia", as);
	addCountry(36, "Ural", as);
	addCountry(37, "Yakutsk", as);

	/* Add country for Africa */
	std::string au = "Australia";
	addCountry(38, "Eastern Australia", au);
	addCountry(39, "Indonesia", au);
	addCountry(40, "New Guinea", au);
	addCountry(41, "Western Australia", au);

	/* Add adjacency/edges between countries - North America */
	std::vector<std::string> adjAlaska = { "Northwest Territory", "Alberta", "Kamchatka" };
	std::vector<std::string> adjOntario = { "Alberta", "Western United States", "Eastern United States", "Northwest Territory", "Quebec", "Greenland" };
	std::vector<std::string> adjAlberta = { "Northwest Territory", "Western United States" };
	std::vector<std::string> adjGreenland = { "Northwest Territory", "Quebec" };
	std::vector<std::string> adjEUS = { "Quebec", "Western United States" };
	std::vector<std::string> adjCA = { "Eastern United States", "Western United States", "Venezuela" };

	addAdjacency("Alaska", adjAlaska);
	addAdjacency("Ontario", adjOntario);
	addAdjacency("Alberta", adjAlberta);
	addAdjacency("Greenland", adjGreenland);
	addAdjacency("Eastern United States", adjEUS);
	addAdjacency("Central America", adjCA);

	/* South America */
	std::vector<std::string> adjPeru = { "Venezuela", "Argentina", "Brazil" };
	std::vector<std::string> adjBrazil = { "Venezuela", "Argentina" };

	addAdjacency("Peru", adjPeru);
	addAdjacency("Brazil", adjBrazil);

	/* Europe */
	std::vector<std::string> adjNE = { "Great Britain", "Western Europe", "Southern Europe", "Ukraine", "Scandinavia" };
	std::vector<std::string> adjSE = { "Western Europe", "Ukraine", "Middle East", "Egypt", "North Africa" };
	std::vector<std::string> adjIce = { "Great Britain", "Scandinavia", "Greenland" };
	std::vector<std::string> adjGB = { "Scandinavia", "Western Europe" };
	std::vector<std::string> adjUkr = { "Scandinavia", "Ural", "Afghanistan", "Middle East" };

	addAdjacency("Northern Europe", adjNE);
	addAdjacency("Southern Europe", adjSE);
	addAdjacency("Iceland", adjIce);
	addAdjacency("Great Britain", adjGB);
	addAdjacency("Ukraine", adjUkr);

	/* Africa */
	std::vector<std::string> adjEAfr = { "Egypt", "Congo", "South Africa", "Madagascar" };
	std::vector<std::string> adjSAfr = { "Madagascar", "Congo" };
	std::vector<std::string> adjNAfr = { "Egypt", "Congo", "Brazil", "Western Europe" };

	addAdjacency("Northern Europe", adjNE);
	addAdjacency("Southern Europe", adjSE);
	addAdjacency("Iceland", adjIce);

	/* Asia */
	std::vector<std::string> adjChina = { "Afghanistan", "India", "Siam", "Mongolia", "Siberia", "Ural" };
	std::vector<std::string> adjIrkutsk = { "Siberia", "Yakutsk", "Kamchatka", "Mongolia" };
	std::vector<std::string> adjMongolia = { "Siberia", "Kamchatka", "Japan" };
	std::vector<std::string> adjKamchatka = { "Japan", "Yakutsk" };
	std::vector<std::string> adjSiberia = { "Yakutsk", "Ural" };
	std::vector<std::string> adjAfghan = { "Ural", "India", "Middle East" };
	std::vector<std::string> adjIndia = { "Siam", "Middle East" };

	addAdjacency("China", adjChina);
	addAdjacency("Irkutsk", adjIrkutsk);
	addAdjacency("Mongolia", adjMongolia);
	addAdjacency("Kamchatka", adjKamchatka);
	addAdjacency("Siberia", adjSiberia);
	addAdjacency("Afghanistan", adjAfghan);
	addAdjacency("India", adjIndia);

	/* Australia */
	std::vector<std::string> adjNG = { "Indonesia", "Western Australia", "Eastern Australia" };
	std::vector<std::string> adjWA = { "Indonesia", "Eastern Australia" };
	std::vector<std::string> adjIndo = { "Siam" };

	addAdjacency("New Guinea", adjNG);
	addAdjacency("Western Australia", adjWA);
	addAdjacency("Indonesia", adjIndo);
}

Map::~Map() {
}

/**
 * areContinentsAdjacent
 *
 * Determine whether two continents are adjacent
 *
 * @param continentX - string name of first continent
 * @param continentY - string name of second continent
 * @return boolean
 */
bool Map::areContinentsAdjacent(std::string continentX, std::string continentY) {
	// Get all countries within continent
	std::vector<Map::Country> countriesCont = getCountriesOfContinents(continentX);
	bool isFound = false;

	// Check each country within continent
	for (int i = 0; i < countriesCont.size(); i++) {
		std::vector<Map::Country> adjCountries = getAdjacentCountries(countriesCont[i].name);
		//std::cout << "\n" << countriesCont[i].name << ":" << std::endl;

		// Loop through adjacent continents and find whether it is connected to a country from continentY
		for (int j = 0; j < adjCountries.size(); j++) {
			//std::cout << "\t" << adjCountries[j].id << adjCountries[j].name << " " << adjCountries[j].continent;

			// Only return true if country is connected to another country which is from continentY
			if (adjCountries[j].continent.compare(continentY) == 0) {
				isFound = true;
				break;
			}
		}

		if (isFound) break;
	}

	return isFound;
}

/**
 * getAdjacentCountries
 *
 * Retrieve all adjacent countries
 * 
 * @param countryName - string name of country
 * @return vector<struct>
 */
std::vector<Map::Country> Map::getAdjacentCountries(std::string countryName) {
	int idc = getIdOfCountry(countryName);
	std::vector<Map::Country> adjCountries;

	// Look in the adjacency matrix for the adjacent countries
	for (int i = 0; i < countries.size(); i++) {
		if (adjacentCountries[idc][i] == 1) {
			adjCountries.push_back(countries[i]);
		}
	}

	return adjCountries;
}

/**
 * getCountriesOfContinents
 *
 * Retrieve all countries in a continent
 *
 * @param continentName - string name of continent
 * @return vector<struct>
 */
std::vector<Map::Country> Map::getCountriesOfContinents(std::string continentName) {
	std::vector<Map::Country> countriesOfContinents;

	// Look for all the countries in the continent
	for (int i = 0; i < countries.size(); i++) {
		if (countries[i].continent.compare(continentName) == 0) {
			countriesOfContinents.push_back(countries[i]);
		}
	}

	return countriesOfContinents;
}

/**
 * getWorldMap
 *
 * Retrieve all countries in the world
 *
 * @return vector<struct>
 */
std::vector<Map::Country> Map::getWorldMap() {
	return countries;
}

/**
 * get
 *
 * Retrieve all information of a country
 *
 * @param countryX - string name of first country
 * @return struct
 */
Map::Country Map::get(std::string countryName) {
	Map::Country countryInfo;

	// Look for the country with that name
	for (int i = 0; i < countries.size(); i++) {
		if (countries[i].name.compare(countryName.c_str()) == 0) {
			countryInfo = countries[i];
		}
	}

	return countryInfo;
}

/**
 * isAdjacent
 *
 * Check whether two countries are adjacent
 *
 * @param countryX - string name of first country
 * @param countryY - string name of second country
 * @return boolean
 */
bool Map::isAdjacent(std::string countryX, std::string countryY) {
	// Get id of both countries
	int countryIdX = getIdOfCountry(countryX);
	int countryIdY = getIdOfCountry(countryY);

	return (adjacentCountries[countryIdX][countryIdY] == 1 || adjacentCountries[countryIdY][countryIdX] == 1) ? true : false;
}

/**
 * addCountry
 *
 * Add country to the world map
 *
 * @param id - index of country in the vector
 * @param countryName - string name of country
 * @param continentName - string name of continent
 * @return void
 */
void Map::addCountry(int id, std::string countryName, std::string continentName) {

	// Add country information
	countryInfo.id = id; // index in the vector array
	countryInfo.name = countryName;
	countryInfo.continent = continentName;

	// Add to list of countries
	countries.push_back(countryInfo);
}

/**
 * addAdjacency
 *
 * Add connection between two countries
 *
 * @param countryX - string name of country
 * @param adjCountries - array string of adjacent countries
 * @return void
 */
void Map::addAdjacency(std::string countryX, std::vector<std::string> adjCountries) {
	// ID of country
	int countryIdX = getIdOfCountry(countryX);

	for (int i = 0; i < adjCountries.size(); i++) {
		// Get ID's of adjacent countries
		int countryIdY = getIdOfCountry(adjCountries[i]);

		// Identity matrix
		adjacentCountries[countryIdX][countryIdY] = 1;
		adjacentCountries[countryIdY][countryIdX] = 1;
	}
}

/**
 * addPlayerToCountry
 *
 * Include a player to a country
 *
 * @param countryName - string name of country
 * @param playerName - string name of player
 * @return void
 */
void Map::addPlayerToCountry(std::string countryName, std::string playerName) {
	// Loop entire country list to find for the id
	for (int i = 0; i < countries.size(); i++) {
		if (countries[i].name.compare(countryName.c_str()) == 0) {
			countries[i].player = playerName;
		}
	}
}

/**
 * getIdOfCountry
 *
 * Retrieve id of a country
 *
 * @param countryName - string name of country
 * @return int
 */
int Map::getIdOfCountry(std::string countryName) {
	int idc = 0;

	// Loop entire country list to find for the id
	for (int i = 0; i < countries.size(); i++) {
		if (countries[i].name.compare(countryName.c_str()) == 0) {
			idc = countries[i].id;
		}
	}

	return idc;
}