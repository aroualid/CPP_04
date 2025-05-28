
#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor called\n";
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called\n";
}

Brain::Brain(Brain const & src)
{
	*this = src;
}

Brain& Brain::operator=(Brain const & src)
{
	if (this != &src)
		for(int i = 0; i < 100; i++)
			this->ideas[i] = src.ideas[i];
	return (*this);
}

std::string Brain::getIdea(int index) const
{
	if (index < 0 || index > 99)
	{
		std::cout << "index out of range\n";
		return(NULL);
	}
	return (ideas[index]);
}

void Brain::setIdea(int index, std::string idea)
{
	if (index < 0 || index > 99)
	{
		std::cout << "index out of range\n";
	}
	else
		ideas[index] = idea;
}
