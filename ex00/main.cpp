#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrongA = new WrongAnimal();
	const WrongAnimal* wrongC = new WrongCat();

	cout << endl;
	cout << BLUE << j->getType() << RESET << endl;
	cout << MAGENTA << i->getType() << RESET << endl;
	cout << YELLOW_BOLD << wrongC->getType() << RESET << endl;

	cout << endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	wrongA->makeSound();
	wrongC->makeSound();

	cout << endl;
	delete meta;
	delete j;
	delete i;
	delete wrongA;
	delete wrongC;
	return 0;

}