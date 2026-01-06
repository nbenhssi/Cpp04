#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
int main()
{
    {
        Animal* meta = new Animal();
        Animal* j = new Dog();
        Animal* i = new Cat();
        
        i->makeSound();
        j->makeSound();
        meta->makeSound();

        delete meta;
        delete j;
        delete i;
    }

    {
        WrongAnimal *n = new WrongCat();
        n->makeSound();
        delete n;
    }

}