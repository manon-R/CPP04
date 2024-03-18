#include "AMateria.hpp"
#include "ICharacter.hpp"

using std::cout;
using std::endl;

AMateria::AMateria(){
}

AMateria::AMateria(string const & type): type(type){
}

AMateria::AMateria(const AMateria& other){
	*this = other;
}

AMateria::~AMateria(){
}

AMateria& AMateria::operator=(const AMateria& other){
	type = other.getType();
	return *this;
}

string const &AMateria::getType() const{
	return type;
}

void AMateria::use(ICharacter& target){
	cout << "Do something to " << target.getName() << endl;
}
