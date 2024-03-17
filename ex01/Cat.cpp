#include "Cat.hpp"

#include <iostream>

using std::cout;
using std::endl;

Cat::Cat(){
	cout << MAGENTA << "Cat" << GREEN << " default constructor called" << RESET << endl;
	type = "Cat";
    brain = new Brain();
}

Cat::Cat(const Cat& other): Animal(other){
	cout << MAGENTA << "Cat" << GREEN << " copy constructor called" << RESET << endl;
	brain = new Brain(*other.brain);
}

Cat::~Cat(){
    delete brain;
	cout << MAGENTA << "Cat" << RED << " destructor called" << RESET << endl;
}

Cat& Cat::operator=(const Cat& other){
	cout << MAGENTA << "Cat" << GREEN << " copy assignment operator called" << endl;
    Animal::operator=(other);
    *this->brain = *other.brain;
	return *this;
}

void Cat::makeSound() const{
	cout << MAGENTA << "Miaou Miaou"  << RESET << endl;
}

Brain& Cat::getBrain(void) const{
    return *brain;
} 
