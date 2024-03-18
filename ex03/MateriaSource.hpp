#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"


// Macros pour les couleurs
# define RESET   "\033[0m"
# define RED     "\033[31m"

using std::string;

class MateriaSource : public IMateriaSource
{

public:

	MateriaSource();
	MateriaSource(const MateriaSource& other);
	MateriaSource& operator= (const MateriaSource& other);

	~MateriaSource();
	void learnMateria(AMateria*);
	AMateria* createMateria(string const & type);

private:
	AMateria *materiaTab[4];
	int sizeMateriaTab;
};

#endif