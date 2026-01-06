#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& WrongCat) : WrongAnimal(WrongCat)
{
}
WrongCat& WrongCat::operator=(const WrongCat& WrongCat)
{
    if (this != &WrongCat)
    {
        this->type = WrongCat.type;
    }
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat sound" << std::endl;
}
