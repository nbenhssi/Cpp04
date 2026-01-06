#ifndef ICE_HPP
#define ICE_HPP


#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(std::string type);
        Ice(Ice &Ice);
        Ice& operator=(const Ice& Ice);
        ~Ice();
        Ice* clone();
        void use(ICharacter& target);
};



#endif