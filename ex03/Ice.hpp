#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

using std::string;

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice& other);
	~Ice();
	Ice& operator= (const Ice& other);

	Ice* clone() const;
	void use(ICharacter& target);
};

#endif