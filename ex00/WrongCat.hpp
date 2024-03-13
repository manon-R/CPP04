#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

// Macros pour les couleurs
# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"
# define BOLD    "\033[1m"
# define MAGENTA_BOLD "\033[1;35m"

class WrongCat : public WrongAnimal {

public:

	WrongCat();
	WrongCat(const WrongCat&other);

	WrongCat& operator= (const WrongCat& other);

	~WrongCat();

	void makeSound() const;

};

#endif