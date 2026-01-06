#include "Ice.hpp"

Ice::Ice() :AMateria("ice")
{
        std::cout << " Ice Default constructor called" << std::endl;
}

Ice::Ice(Ice &Ice) :AMateria(Ice)
{
    (void)Ice;
    std::cout << " Ice Copy constructor called" << std::endl;
}
Ice& Ice::operator=(const Ice& Ice)
{
    (void)Ice;
    return *this;
}
Ice::~Ice()
{
    std::cout << " Ice Destructor called" << std::endl;
} 

Ice* Ice::clone()
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}