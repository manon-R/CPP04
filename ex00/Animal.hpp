#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

// Macros pour les couleurs
# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"

using std::string;

class Animal {

public:

	Animal();
	Animal(const Animal &other);

	Animal& operator= (const Animal& other);

	virtual ~Animal();

	virtual void makeSound() const;
	string getType() const;

protected:
	string type;
};

#endif