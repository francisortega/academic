#pragma once

#include <vector>
#include <string>
#include <iostream>

const int MAX_COUNTRIES_NUM = 42;

class Map
{
	public:
		Map();
		~Map();
		/* Information about a country */
		struct Country {
			int id;
			std::string name;
			std::string continent;
			std::string player;
			std::vector<std::string> armies;
		} countryInfo;

		/* Methods to retrieve more about the world map */
		std::vector<Country> getCountriesOfContinents(std::string continentInitial);
		std::vector<Country> getWorldMap();

		/* Get more information about a country */
		Country get(std::string countryName);

		/* Two countries adjacent */
		bool isAdjacent(std::string countryX, std::string countryY);

		/* Two continents adjacent */
		bool areContinentsAdjacent(std::string continentX, std::string continentY);

		/* Add country to worldmap */
		void addCountry(int id, std::string countryName, std::string continent);

		/* Add adjacency between two countries */
		void addAdjacency(std::string countryX, std::vector<std::string> adjCountries);

		/* Get id of a country */
		int getIdOfCountry(std::string countryName);

		/* Assign player to country */
		void addPlayerToCountry(std::string countryName, std::string playerName);

		/* Assign armies to country */
		void addArmiesToCountry(std::string countryName, std::string armies);

	protected:
		/* Matrix to hold each country's adjacency */
		int adjacentCountries[MAX_COUNTRIES_NUM][MAX_COUNTRIES_NUM];

		/* List of countries */
		std::vector<Country> countries;
};