#include "Dog.hpp"

#include <iostream>

using std::cout;
using std::endl;

Dog::Dog(){
	cout << BLUE << "Dog" << GREEN << " default constructor called" << RESET << endl;
	type = "Dog";
    brain = new Brain();
}

Dog::Dog(const Dog& other): AAnimal(other){
	cout << BLUE << "Dog" << GREEN << " copy constructor called" << RESET << endl;
	brain = new Brain(*other.brain);
}

Dog::~Dog(){
    delete brain;
	cout << BLUE << "Dog" << RED << " destructor called" << RESET << endl;
}

Dog& Dog::operator=(const Dog& other){
	cout <<  BLUE << "Dog" << RESET << " copy assignment operator called" << endl;
	AAnimal::operator=(other);
    *this->brain = *other.brain;
	return *this;
}

void Dog::makeSound() const{
	cout << BLUE << "Wouf Wouf"  << RESET << endl;
}

Brain& Dog::getBrain(void) const{
    return *brain;
} 