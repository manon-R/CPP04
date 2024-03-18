#include "Ice.hpp"

using std::cout;
using std::endl;

Ice::Ice(): AMateria("ice"){
}


Ice::Ice(const Ice& other){
	*this = other;
}

Ice::~Ice(){
}

Ice& Ice::operator=(const Ice& other){
	type = other.getType();
	return *this;
}

Ice* Ice::clone() const{
	Ice *clone = new Ice();
	return clone;
}

void Ice::use(ICharacter& target){
	cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
}