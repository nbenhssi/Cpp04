#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        std::string type;
        AMateria *Inventory[4];
    public:
        MateriaSource();
        MateriaSource(MateriaSource &MateriaSource);
        MateriaSource& operator=(const MateriaSource& MateriaSource);
        ~MateriaSource();
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif