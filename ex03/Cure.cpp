#include "Cure.hpp"

using std::cout;
using std::endl;

Cure::Cure(): AMateria("cure"){
}


Cure::Cure(const Cure& other): AMateria(other){
}

Cure::~Cure(){
}

Cure& Cure::operator=(const Cure& other){
	type = other.getType();
	return *this;
}

AMateria* Cure::clone() const{
	return new Cure(*this);
}

void Cure::use(ICharacter& target){
	cout << GREEN << "* heals " << RESET << target.getName() << GREEN << "’s wounds *" << RESET << endl;
}