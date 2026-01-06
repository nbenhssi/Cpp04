#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() 
{
    std::cout << "===  Polymorphism ===" << std::endl;

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "\ngetType() tests:" << std::endl;
    std::cout << j->getType()<< std::endl;
    std::cout << i->getType()<< std::endl;
    std::cout << meta->getType()<< std::endl;

    std::cout << "\nmakeSound() tests- virtual functions work correctly:" << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    std::cout << "\nDeleting objects:" << std::endl;
    delete meta;
    delete j;
    delete i;

    std::cout << "\n=== Wrong Implementation tests ===" << std::endl;

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "\nWrongAnimal makeSound()&getType() tests - no virtual so no polymorphism:" << std::endl;
    std::cout<< wrongMeta->getType() << std::endl;
    std::cout<< wrongCat->getType() << std::endl;
    wrongMeta->makeSound();
    wrongCat->makeSound();

    std::cout << "\nDeleting wrong objects:" << std::endl;
    delete wrongMeta;
    delete wrongCat;

    std::cout << "\ncopy constructor tests:" << std::endl;
    Dog originalDog;
    Dog copiedDog(originalDog);

    std::cout << "\nassignment operator tests:" << std::endl;
    Cat cat1;
    Cat cat2;
    cat2 = cat1;
    std::cout << std::endl;

    return 0;
}