#include "AAnimal.hpp"
#include <iostream>

using std::cout;
using std::endl;

AAnimal::AAnimal(): type("AAnimal"){
	cout << YELLOW << "AAnimal" << GREEN << " default constructor called" << RESET << endl;
}

AAnimal::AAnimal(const AAnimal& other){
	cout << YELLOW << "AAnimal" << GREEN << " copy constructor called" << RESET << endl;
	*this = other;
}

AAnimal::~AAnimal(){
	cout << YELLOW << "AAnimal" << RED << " destructor called" << RESET << endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other){
	cout << YELLOW << "AAnimal" << GREEN << " copy assignment operator called" << endl;
	type = other.getType();
	return *this;
}

void AAnimal::makeSound() const{
	cout << YELLOW <<"Random sound" << RESET << endl;
}

string AAnimal::getType() const{
	return type;
}