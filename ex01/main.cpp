#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{

    Animal* a = new Dog();
    Animal* b = new Cat();

    a->makeSound();
    b->makeSound();

    delete a;
    delete b;


    Dog dog1;
    dog1.getBrain()->setIdea(0, "Bone");

    Dog dog2 = dog1;

    std::cout << "Dog1 idea: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog2 idea: " << dog2.getBrain()->getIdea(0) << std::endl;

    return 0;
}
