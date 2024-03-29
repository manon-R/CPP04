#include "Dog.hpp"
#include <iostream>

using std::cout;
using std::endl;

Dog::Dog(){
	type = "Dog";
	cout << BLUE << "Dog" << GREEN << " default constructor called" << RESET << endl;
}

Dog::Dog(const Dog& other){
	cout <<  BLUE << "Dog" << GREEN << " copy constructor called" << RESET << endl;
	*this = other;
}

Dog::~Dog(){
	cout << BLUE << "Dog" << RED << " destructor called" << RESET << endl;
}

Dog& Dog::operator=(const Dog& other){
	cout <<  BLUE << "Dog" << RESET << " copy assignment operator called" << endl;
	type = other.getType();
	return *this;
}

void Dog::makeSound() const{
	cout << BLUE << "Wouf Wouf"  << RESET << endl;
}
