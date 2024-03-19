#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

// Macros pour les couleurs
# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"

class Dog : public Animal {

public:

	Dog();
	Dog(const Dog&other);

	Dog& operator= (const Dog& other);

	~Dog();

	void makeSound() const;
    Brain& getBrain() const;

private:
    Brain *brain;

};

#endif