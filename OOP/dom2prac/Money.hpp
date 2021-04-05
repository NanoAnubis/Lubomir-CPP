#pragma once
#include<iostream>

//enum Type {
//	gold,	//0
//	silver	//1
//};

#include"TypeEnum.hpp"

class Money 
{
public:

	

	Money(const unsigned int qg = 0, const unsigned int qs = 0);

	unsigned int getGold() const;
	unsigned int getSilver() const;
	void TotalMoney() const;
	
	bool addItem(const unsigned int, const Type); //adds only one type of currency

	bool addItem(const unsigned int, const unsigned int); //adds to both types of currency in order gold,silver

	bool deleteItem(const unsigned int, const Type);

	unsigned int SlotsNeeded() const;
	void EraseItem();
private:
	unsigned int money[2] = {};

	void RestackMoney();
};