#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

using std::string;

class ICharacter;

class AMateria
{
protected:
	AMateria();
	AMateria(string const & type);
	AMateria(const AMateria& other);
	string type;


public:

	virtual ~AMateria();
	AMateria& operator= (const AMateria& other);

	string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif