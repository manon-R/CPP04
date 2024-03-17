#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

// Macros pour les couleurs
# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"

using std::string;

class AAnimal {

protected:
	AAnimal();
	AAnimal(const AAnimal&other);
	string type;

public:

	virtual ~AAnimal();
    AAnimal& operator= (const AAnimal& other);

	string getType() const;

	virtual void makeSound() const;
    virtual Brain& getBrain() const = 0;

};

#endif