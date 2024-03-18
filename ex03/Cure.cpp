#include "Cure.hpp"

using std::cout;
using std::endl;

Cure::Cure(): AMateria("cure"){
}


Cure::Cure(const Cure& other){
	*this = other;
}

Cure::~Cure(){
}

Cure& Cure::operator=(const Cure& other){
	type = other.getType();
	return *this;
}

Cure* Cure::clone() const{
	Cure *clone = new Cure();
	return clone;
}

void Cure::use(ICharacter& target){
	cout << "* heals " << target.getName() << "’s wounds *" << endl;
}