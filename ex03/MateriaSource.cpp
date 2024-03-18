#include "MateriaSource.hpp"

using std::cout;
using std::endl;

MateriaSource::MateriaSource() : sizeMateriaTab(0){
}

MateriaSource::MateriaSource(const MateriaSource& other){
	*this = other;
}

MateriaSource& MateriaSource::operator= (const MateriaSource& other){
	int i = 0;
	if (sizeMateriaTab)
	{
		while (i < sizeMateriaTab)
		{
			delete materiaTab[i];
			i++;
		}
	}
	if (other.sizeMateriaTab > 0)
	{
		i = 0;
		while (i < other.sizeMateriaTab)
		{
			materiaTab[i] = other.materiaTab[i]->clone();
			i++;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource(){
	if (sizeMateriaTab)
	{
		int i = 0;
		while (i < sizeMateriaTab)
		{
			delete materiaTab[i];
			i++;
		}
	}
}

void MateriaSource::learnMateria(AMateria *am){
	if (sizeMateriaTab == 4)
		cout << RED << "Already know 4 materias!" << endl;
	else
	{
		materiaTab[sizeMateriaTab] = am->clone();
		sizeMateriaTab++;
	}
}

AMateria* MateriaSource::createMateria(string const & type){
	if (!sizeMateriaTab)
	{
		cout << "No materia learned.. Impossible to create anything..." << endl;
		return 0;
	}

	int i = 0;
	while (i < sizeMateriaTab)
	{
		if (materiaTab[i]->getType() == type)
			return materiaTab[i]->clone();
		i++;
	}
	cout << RED << "No Materia of type " << type << " learned before..." << endl;
	return 0;
}