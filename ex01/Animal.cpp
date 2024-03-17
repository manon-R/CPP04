#include "Animal.hpp"
#include <iostream>

using std::cout;
using std::endl;

Animal::Animal(): type("Animal"){
	cout << YELLOW << "Animal" << GREEN << " default constructor called" << RESET << endl;
}

Animal::Animal(const Animal& other){
	cout << YELLOW << "Animal" << GREEN << " copy constructor called" << RESET << endl;
	*this = other;
}

Animal::~Animal(){
	cout << YELLOW << "Animal" << RED << " destructor called" << RESET << endl;
}

Animal& Animal::operator=(const Animal& other){
	cout << YELLOW << "Animal" << GREEN << " copy assignment operator called" << endl;
	type = other.getType();
	return *this;
}

void Animal::makeSound() const{
	cout << YELLOW <<"Random sound" << RESET << endl;
}

string Animal::getType() const{
	return type;
}