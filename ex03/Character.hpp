#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>

// Macros pour les couleurs
# define RESET   "\033[0m"
# define RED     "\033[31m"

using std::string;

class Character : public ICharacter
{

public:
	Character();
	Character(string const & name);
	Character(const Character& other);
	Character& operator= (const Character& other);
	~Character();

	string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

private:

	AMateria *inventory[4];
	AMateria *trash[100];
	int	inventSize;
	int trashSize;
	string name;
};

#endif