#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define CYAN    "\033[36m"

using std::string;

class Brain{

public:

    Brain();
    Brain(const Brain& other);

    Brain& operator= (const Brain& other);

    ~Brain();

    void setIdea(string const& idea, int index);
    string  getIdea(int index) const;


private:
    string ideas[100];
};

#endif