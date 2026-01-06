#include "AMateria.hpp"


AMateria::AMateria(){} //msgg

AMateria::AMateria(AMateria &materia)
{
    this->type = materia.type;
        std::cout << " materia Copy constructor called" << std::endl;
}
AMateria::~AMateria(){}//msgg

AMateria::AMateria(std::string const &type)
{
    this->type = type;
    std::cout << " materia Copy constructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& AMateria)
{
    (void)AMateria;
    return *this;//ms
}
std::string const & AMateria::getType() const
{
    return type;
}

void AMateria::use(ICharacter& target)
{

    (void)target;
}