#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &brain);
        Brain& operator=(const Brain& brain);
        ~Brain();
        void setIdea(int index, const std::string& idea);
        void setIdea(const std::string& idea, int index);
        std::string getIdea(int index) const;
};

#endif