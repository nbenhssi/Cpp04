#include "Cure.hpp"

Cure::Cure() :AMateria("cure")
{
        std::cout << " Cure Default constructor called" << std::endl;
}

Cure::Cure(Cure &cure) :AMateria(cure)
{
    (void)cure;
    std::cout << " Cure Copy constructor called" << std::endl;
}
Cure& Cure::operator=(const Cure& Cure)
{
    (void)Cure;
    return *this;
}
Cure::~Cure(){} 

Cure* Cure::clone()
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}