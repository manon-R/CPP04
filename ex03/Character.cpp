#include "Character.hpp"

using std::cout;
using std::endl;


Character::Character(): inventSize(0), trashSize(0){
}

Character::Character(string const & name): inventSize(0), trashSize(0), name(name){
}

Character::Character(const Character& other){
	*this = other;
}

Character& Character::operator=(const Character& other){
	name = other.getName();
	int i = 0;
	if (inventSize)
	{
		while (i < inventSize)
		{
			delete inventory[i];
			i++;
		}
		inventSize = 0;
	}
	if (trashSize)
	{
		i = 0;
		while (i < trashSize)
		{
			delete trash[i];
			i++;
		}
		trashSize = 0;
	}
	if (other.inventSize > 0)
	{
		i = 0;
		while (i < other.inventSize)
		{
			inventory[i] = other.inventory[i]->clone();
			i++;
		}
	}
	return *this;
}

Character::~Character(){
	int i = 0;
	if (inventSize)
	{
		while (i < inventSize)
		{
			delete inventory[i];
			i++;
		}
	}
	if (trashSize)
	{
		i = 0;
		while (i < trashSize)
		{
			delete trash[i];
			i++;
		}
	}
}

string const & Character::getName() const{
	return name;
}

void Character::equip(AMateria* m){
	if (inventSize < 4)
	{
		inventory[inventSize] = m;
		inventSize++;
	}
	else
		cout << "Not possible to equip => Inventory is full" << endl;
}

void Character::unequip(int index){
	if (index < 0 || index >= inventSize)
		cout << RED << "Invalid index" << endl;
	else
	{
		trash[trashSize] = inventory[index];
		trashSize++;
		inventSize--;
	}
}

void Character::use(int idx, ICharacter& target){
	if (idx < 0 || idx >= inventSize)
		cout << RED << "Invalid index" << endl;
	else
		inventory[idx]->use(target);
}