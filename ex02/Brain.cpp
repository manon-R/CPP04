#include "Brain.hpp"
#include <iostream>

using std::cout;
using std::endl;

Brain::Brain(){
    cout << CYAN << "Brain" << GREEN << " default constructor called" << RESET << endl;
}

Brain::~Brain(){
    cout << CYAN << "Brain" << RED << " destructor called" << RESET << endl;
}

Brain::Brain(const Brain& other){
    *this = other;
	cout << CYAN << "Brain" << GREEN << " copy constructor called" << RESET << endl;
}

Brain& Brain::operator=(const Brain& other){
	cout << CYAN << "Brain" << RESET << " copy assignment operator called" << endl;
    std::copy(other.ideas, other.ideas + 100, this->ideas);
    return *this;
}

void Brain::setIdea(string const& idea, int index){
    if (index >= 0 && index < 100)
        ideas[index] = idea;
}

string Brain::getIdea(int index) const{
    if (index >= 0 && index < 100)
        return ideas[index];
    cout << "INVALID INDEX" << endl;
    return NULL;
}