#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

// Macros pour les couleurs
# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"
# define YELLOW_BOLD  "\033[1;33m"

using std::string;

class WrongAnimal {

public:

	WrongAnimal();
	WrongAnimal(const WrongAnimal&other);

	WrongAnimal& operator= (const WrongAnimal& other);

	~WrongAnimal();

	void makeSound() const;
	string getType() const;

protected:
	string type;
};

#endif