#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

// Macros pour les couleurs
# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"

class Cat : public AAnimal {

public:

	Cat();
	Cat(const Cat&other);

	Cat& operator= (const Cat& other);

	~Cat();

	void makeSound() const;
    Brain& getBrain() const;

private:
    Brain *brain;

};

#endif