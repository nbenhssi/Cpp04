#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << " materia Default constructor called" << std::endl;
}


AMateria::AMateria(AMateria &materia)
{
    this->type = materia.type;
    std::cout << " materia Copy constructor called" << std::endl;
}
AMateria::~AMateria()
{
    std::cout << " materia Destructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
    this->type = type;
    std::cout << " materia Copy constructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& AMateria)
{
    (void)AMateria;
    std::cout << " materia copy assignment operator called" << std::endl;
    return *this;
}
std::string const & AMateria::getType() const
{
    return type;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}