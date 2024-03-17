#include "Cat.hpp"
#include "Dog.hpp"

using std::cout;
using std::endl;

#define NB_ANIMALS 6

int main(void){
    cout << CYAN << "We started by creating Animal tab, one Cat and one Dog instance" << RESET << endl;
    cout << endl;
    const Animal *animalTab[NB_ANIMALS];
    Dog dog;
    cout << endl;
    Cat cat;

    cout << endl;
    cout << CYAN << "Then we had some ideas to Cat and Dog's brain" << RESET << endl;
    cout << endl;
    cout << CYAN <<  "Now we fill the animal's tab with half dog and cat (deep) copies" << RESET << endl;
    int i = 0;
    while (i < NB_ANIMALS / 2)
    {
        animalTab[i] = new Dog(dog);
        cout << endl;
        i++;
    }
    cout << endl;
    while (i < NB_ANIMALS)
    {
        animalTab[i] = new Cat(cat);
        cout << endl;
        i++;
    }

    cout << endl;
    i = 0;
    while (i < NB_ANIMALS)
    {
        cout << "Animal[" << i << "] is of type => " << animalTab[i]->getType() << endl;
        animalTab[i]->makeSound();
        delete animalTab[i];
        cout << endl;
        i++;
    }
    cout << endl;

    cout << CYAN << "Now we can test that Dog and Cat copies are deep copies" << RESET << endl;
    cout << endl;
    Brain *brainCat;
    Brain *brainDog;
    brainCat = &cat.getBrain();
    brainDog = &dog.getBrain();
    brainCat->setIdea("Cats sleep for around 13 to 16 hours a day (70% of their life)", 0);\
    brainDog->setIdea("I can learn over 100 words and gestures!", 0);

    Dog *testDog = new Dog(dog);
    cout << endl;
    Cat *testCat = new Cat(cat);
    cout << endl;
    cout << "Original dog's brain adress is => " << CYAN << &dog.getBrain() << RESET << " and its first idea is " << CYAN << dog.getBrain().getIdea(0) << RESET << endl;
    cout << endl;
    cout << "Copy dog's brain adress is => " << CYAN << &testDog->getBrain() << RESET << " and its first idea is " << CYAN << testDog->getBrain().getIdea(0) << RESET << endl;
    cout << endl;
    cout << "Original cat's brain adress is => " << CYAN << &cat.getBrain() << RESET << " and its first idea is " << CYAN << cat.getBrain().getIdea(0) << RESET << endl;
    cout << endl;
    cout << "Copy cat's brain adress is => " << CYAN << &testCat->getBrain() << RESET << " and its first idea is " << CYAN << testCat->getBrain().getIdea(0) << RESET << endl;

    cout << endl;
    delete testDog;
    cout << endl;
    delete testCat;
    cout << endl;
    return 0;
}