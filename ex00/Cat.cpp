#include "Cat.hpp"
#include <iostream>

using std::cout;
using std::endl;

Cat::Cat(){
	type = "Cat";
	cout << MAGENTA << "Cat" << GREEN << " default constructor called" << RESET << endl;
}

Cat::Cat(const Cat& other){
	cout << MAGENTA << "Cat" << GREEN << " copy constructor called" << RESET << endl;
	*this = other;
}

Cat::~Cat(){
	cout << MAGENTA << "Cat" << RED << " destructor called" << RESET << endl;
}

Cat& Cat::operator=(const Cat& other){
	cout << MAGENTA << "Cat" << GREEN << " copy assignment operator called" << endl;
	type = other.getType();
	return *this;
}

void Cat::makeSound() const{
	cout << MAGENTA << "Miaou Miaou"  << RESET << endl;
}
