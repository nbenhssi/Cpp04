#include "Character.hpp"

Character::Character()
{
    for (int i = 0; i < 4 ; i++)
    {
        this->inventory[i] = NULL;     
    }
}

Character::Character(Character& Character) 
{
    this->name = Character.name;
    for (int i = 0; i < 4 ; i++)
    {
        if (Character.inventory[i])
            inventory[i] = Character.inventory[i]->clone();
        else
            this->inventory[i] = NULL;
    }
}


Character::Character(std::string const &name)
{   
    for (int i = 0; i < 4 ; i++)
    {
        this->inventory[i] = NULL;     
    }
    this->name = name;
}
Character& Character::operator=(const Character& Character)
{
    if (this != &Character)
    {
        this->name = Character.name;
        for (int i = 0; i < 4 ; i++)
        {
            delete this->inventory[i];
            if (Character.inventory[i])
                this->inventory[i] = Character.inventory[i]->clone();
            else 
               this->inventory[i] = NULL;     
        }
    }
    return (*this);
}


Character::~Character()
{
    for (int i = 0; i < 4 ; i++)
    {
        delete(this->inventory[i]);
    }
}

std::string const & Character::getName() const
{
    return name;
}

void Character::equip(AMateria* m)
{
    if (!m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] == 0)
        {
            inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        inventory[idx] = 0;
}


void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && inventory[idx])
        inventory[idx]->use(target);
}