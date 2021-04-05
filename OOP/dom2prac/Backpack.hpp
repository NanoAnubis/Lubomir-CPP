#pragma once

#include"Materials.hpp"
#include"Money.hpp"

template<typename T>
class Backpack
{
public:

	Backpack() = default;
	Backpack(const T);

	bool isFull() const;
	bool isEmpty() const;

	void EraseBackpack();
	bool addItem(const unsigned int, const Type);
	bool removeItem(const unsigned int, const Type);


private:
	
	T Item;
	unsigned int used_slots = 0;
	const int slots = 16;
	
};

template <typename T>
Backpack<T>::Backpack(const T other)
{
	if (other.SlotsNeeded() <= slots) {
		Item = other;
		used_slots = other.SlotsNeeded();
	}
}


template <typename T>
bool Backpack<T>::isFull() const
{
	return used_slots == 16;
}
template <typename T>
bool Backpack<T>::isEmpty() const
{
	return used_slots == 0;
}

template <typename T>
void Backpack<T>::EraseBackpack()
{
	Item.EraseItem();
	used_slots = 0;
}

template <typename T>
bool Backpack<T>::addItem(const unsigned int quantity, const Type type)
{
	return Item.addItem(quantity,type);
}

template <typename T>
bool Backpack<T>::removeItem(const unsigned int quantity, const Type type)
{
	return Item.deleteItem(quantity, type);
}
