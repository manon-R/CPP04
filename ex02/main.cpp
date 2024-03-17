#include "Cat.hpp"
#include "Dog.hpp"

using std::cout;
using std::endl;

int main(void){

    //On peut ecrire
    AAnimal *test1 = new Dog();
    cout << endl;
    AAnimal *test2 = new Cat();
    cout << endl;
    // Mais on ne peut pas ecrire
    // AAnimal *test3 = new AAnimal();

    cout << endl;
    test1->makeSound();
    cout << endl;
    test2->makeSound();

    cout << endl;
    delete test1;
    cout << endl;
    delete test2;
    return 0;
}