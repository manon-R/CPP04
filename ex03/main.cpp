#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

using std::cout;
using std::endl;

int main()
{
	// Create Materia Source and learn 2 Materias
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	//Create a Character
	ICharacter* me = new Character("me");

	//Create one Materia Ice and one Materia Cure and equip()
	cout << "Create Cure and Ice Materia" << endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	cout << endl;

	//Try to create unrecognized type of Materia
	cout << "Try to create unrecognized type of Materia" << endl;
	tmp = src->createMateria("truc");
	cout << endl;

	//Create new Character to test use() on it
	cout << "Create a new Character bob and use Materia on him...\n" << endl;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	cout << endl;

	//Test unequip function and try to use the unequiped Materia
	cout << "Unequip Materia and try to use it again" << endl;
	AMateria* m;
	m = me->getMateria(1);
	me->unequip(1);
	me->use(1, *bob);

	//clean all
	delete m;
	delete bob;
	delete me;
	delete src;
	return 0;
}