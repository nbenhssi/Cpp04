#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

#include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria();
        AMateria(AMateria &materia);
        virtual ~AMateria();
        AMateria& operator=(const AMateria& AMateria);
        AMateria(std::string const & type);
        std::string const &getType() const;
        virtual AMateria* clone() = 0;
        virtual void use(ICharacter& target);
};

#endif 