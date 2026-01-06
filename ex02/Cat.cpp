#include "Cat.hpp"

Cat::Cat() : Animal()
{
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &Cat) : Animal(Cat)
{
    brain = new Brain(*Cat.brain);
    std::cout << "Cat Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& Cat)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &Cat)
    {
        Animal::operator=(Cat);
        delete brain;
        brain = new Brain(*Cat.brain);
    }
    return *this;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meowwwww" << std::endl;
}

Brain* Cat::getBrain() const
{
    return brain;
}