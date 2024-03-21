#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

// Macros pour les couleurs
# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"

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