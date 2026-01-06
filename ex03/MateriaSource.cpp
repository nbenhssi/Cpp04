#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        Inventory[i] = NULL;
}
MateriaSource::MateriaSource(MateriaSource &MateriaSource)
{
    for (int i = 0; i < 4; i++)
    {
        if (MateriaSource.Inventory[i])
            this->Inventory[i] = MateriaSource.Inventory[i]->clone();
        else
            this->Inventory[i] = NULL;
    }
}
MateriaSource& MateriaSource::operator=(const MateriaSource& MateriaSource)
{
    if (this != &MateriaSource)
    {
        for (int i = 0; i < 4; i++)
        {
            if (MateriaSource.Inventory[i])
                this->Inventory[i] = MateriaSource.Inventory[i]->clone();
            else
               this->Inventory[i] = NULL;     
        }
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4 ; i++)
    {
        delete(this->Inventory[i]);
    }
}


void MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
        return;
    for(int i = 0; i < 4; i++)
    {
        if (!Inventory[i])
        {
            Inventory[i] = m;
                return ;
        }
    }    
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i<4; i++)
    {
        if (Inventory[i] && Inventory[i]->getType() == type)
            return (Inventory[i]->clone());
    }
    return NULL;
}