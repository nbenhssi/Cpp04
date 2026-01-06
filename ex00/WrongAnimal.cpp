#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& WrongAnimal)
{
    type = WrongAnimal.type;
}
WrongAnimal& WrongAnimal::operator=(const   WrongAnimal&  WrongAnimal)
{
    if (this != &WrongAnimal)
    {
        this->type = WrongAnimal.type;
    }
    std::cout << "WrongAnimal copy assignment operator called" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}


std::string WrongAnimal::getType()
{
    return type;
}

void WrongAnimal::makeSound()
{
    std::cout << "WrongAnimal animal sound" << std::endl;
}
