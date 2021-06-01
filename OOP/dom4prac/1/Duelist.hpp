/**
* Solution to homework assignment 4
* Object Oriented Programming Course
* Faculty of Mathematics and Informatics of Sofia University
* Summer semester 2020/2021
*
* @author Lubomir Stoykov
* @idnumber 62569
* @task 1
* @compiler VC
*/

#pragma once
#pragma warning (disable:4267)

#include<fstream>
#include<sstream>
#include"Deck.hpp"

class Duelist {
public:

	Duelist(const std::string& name = "Unknown");

	Deck& getDeck();
	std::string getName() const;

	void setName(const std::string&);

	void display();

	bool saveDeck(const std::string&);
	bool loadDeck(const std::string&);

	bool duel(Duelist&);

private:
	std::string name;
	Deck deck;
};
