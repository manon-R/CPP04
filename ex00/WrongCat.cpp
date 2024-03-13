#include "WrongCat.hpp"
#include <iostream>

using std::cout;
using std::endl;

WrongCat::WrongCat(){
	type = "WrongCat";
	cout << MAGENTA_BOLD << "WrongCat" << GREEN << " default constructor called" << RESET << endl;
}

WrongCat::WrongCat(const WrongCat& other){
	cout << MAGENTA_BOLD << "WrongCat" << GREEN << " copy constructor called" << RESET << endl;
	*this = other;
}

WrongCat::~WrongCat(){
	cout << MAGENTA_BOLD << "WrongCat" << RED << " destructor called" << RESET << endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other){
	cout << MAGENTA_BOLD << "WrongCat" << GREEN << " copy assignment operator called" << endl;
	type = other.getType();
	return *this;
}

void WrongCat::makeSound() const{
	cout << MAGENTA_BOLD << "Miaou Miaou"  << RESET << endl;
}
