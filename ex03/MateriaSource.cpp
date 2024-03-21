#include "MateriaSource.hpp"

using std::cout;
using std::endl;

MateriaSource::MateriaSource() : sizeMateriaTab(0){
}

MateriaSource::MateriaSource(const MateriaSource& other){
	*this = other;
}

MateriaSource& MateriaSource::operator= (const MateriaSource& other){

	for (int i = 0; i < sizeMateriaTab; i++)
	{
		delete materiaTab[i];
	}
	if (other.sizeMateriaTab > 0)
	{
		for (int i = 0; i < other.sizeMateriaTab; i++)
		{
			materiaTab[i] = other.materiaTab[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < sizeMateriaTab; i++)
	{
		delete materiaTab[i];
	}
}

void MateriaSource::learnMateria(AMateria *am){
	if (sizeMateriaTab == 4)
		cout << RED << "Already know 4 materias!" << endl;
	else
	{
		materiaTab[sizeMateriaTab] = am->clone();
		delete am;
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
	cout << RED << "No Materia of type " << RESET << type << RED << " learned before..." << RESET << endl;
	return 0;
}