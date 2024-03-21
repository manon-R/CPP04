#include "Character.hpp"

using std::cout;
using std::endl;


Character::Character(): inventSize(0), name("default"){
}

Character::Character(string const & name): inventSize(0), name(name){
}

Character::Character(const Character& other){
	*this = other;
}

Character& Character::operator=(const Character& other){
	name = other.getName();
	for (int i = 0; i < inventSize; i++)
	{
		delete inventory[i];
	}
	inventSize = 0;
	if (other.inventSize > 0)
	{
		int i = 0;
		while (i < other.inventSize)
		{
			inventory[i] = other.inventory[i]->clone();
			i++;
		}
	}
	return *this;
}

Character::~Character(){
	for (int i = 0; i < inventSize; i++)
	{
		delete inventory[i];
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
	{
		cout << RED << "Invalid index" << endl;
		return ;
	}
	inventSize--;
}

void Character::use(int idx, ICharacter& target){
	if (idx < 0 || idx >= inventSize)
		cout << RED << "Invalid index" << endl;
	else
		inventory[idx]->use(target);
}