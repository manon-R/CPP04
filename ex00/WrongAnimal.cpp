#include "WrongAnimal.hpp"
#include <iostream>

using std::cout;
using std::endl;

WrongAnimal::WrongAnimal(): type("WrongAnimal"){
	cout << YELLOW_BOLD << "WrongAnimal" << GREEN << " default constructor called" << RESET << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other){
	cout << YELLOW_BOLD << "WrongAnimal" << GREEN << " copy constructor called" << RESET << endl;
	*this = other;
}

WrongAnimal::~WrongAnimal(){
	cout << YELLOW_BOLD << "WrongAnimal" << RED << " destructor called" << RESET << endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
	cout << YELLOW_BOLD << "WrongAnimal" << GREEN << "copy assignment operator called" << endl;
	type = other.getType();
	return *this;
}

void WrongAnimal::makeSound() const{
	cout << YELLOW_BOLD <<"WRONG Random sound" << RESET << endl;
}

string WrongAnimal::getType() const{
	return type;
}