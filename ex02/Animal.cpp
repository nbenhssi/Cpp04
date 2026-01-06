#include "Animal.hpp"

Animal::Animal() : type("")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &animal) : type(animal.type)
{
    std::cout << "Animal Copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& animal)
{
    if (this != &animal)
    {
        this->type = animal.type;
    }
    std::cout << "Animal copy assignment operator called" << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}