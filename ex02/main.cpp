#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{

    std::cout << "=== Basic functionality test ===" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;

    std::cout << "\n=== Array test ===" << std::endl;
    Animal* animals[6];

    for (int idx = 0; idx < 6; idx++) {
        if (idx < 6 / 2) {
            animals[idx] = new Dog();
        } else {
            animals[idx] = new Cat();
        }
    }

    for (int idx = 0; idx < 6; idx++) {
        delete animals[idx];
    }

    std::cout << "\n=== Deep copy test ===" << std::endl;
    Dog originalDog;
    originalDog.getBrain()->setIdea("I love bones!", 0);
    originalDog.getBrain()->setIdea("Chase the mailman!", 1);

    std::cout << "\nOriginal dog's first idea: " << originalDog.getBrain()->getIdea(0) << std::endl;

    Dog copiedDog(originalDog);
    std::cout << "Copied dog's first idea: " << copiedDog.getBrain()->getIdea(0) << std::endl;

    originalDog.getBrain()->setIdea("Modified idea", 0);
    std::cout << "\nAfter modifying original:" << std::endl;
    std::cout << "Original dog's first idea: " << originalDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied dog's first idea: " << copiedDog.getBrain()->getIdea(0) << std::endl;

    Dog assignedDog;
    assignedDog = originalDog;
    std::cout << "\nAssigned dog's first idea: " << assignedDog.getBrain()->getIdea(0) << std::endl;
    return 0;
}