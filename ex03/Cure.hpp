#ifndef CURE_HPP
#define CURE_HPP


#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(Cure &cure);
        Cure& operator=(const Cure& Cure);
        ~Cure();
        Cure* clone();
        void use(ICharacter& target);
};



#endif