#include "Ice.hpp"

using std::cout;
using std::endl;

Ice::Ice(): AMateria("ice"){
}


Ice::Ice(const Ice& other): AMateria(other){
}

Ice::~Ice(){
}

Ice& Ice::operator=(const Ice& other){
	type = other.getType();
	return *this;
}

AMateria* Ice::clone() const{
	return new Ice(*this);
}

void Ice::use(ICharacter& target){
	cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
}