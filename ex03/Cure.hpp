#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

using std::string;

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure& other);
	~Cure();
	Cure& operator= (const Cure& other);

	Cure* clone() const;
	void use(ICharacter& target);
};

#endif