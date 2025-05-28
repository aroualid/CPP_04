
#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat Constructor called\n";
	CatBrain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called\n";
	delete CatBrain;
}


Cat::Cat(Cat const & src)
{
	*this = src;
}

Cat& Cat::operator=(Cat const & src)
{
	type = src.type;
	return (*this);
}

std::string Cat::getType() const
{
	return (this->type);
}

void Cat::makeSound(void) const
{
	std::cout << "MiaouuuuuuuuuuuuuuuuuuuuuuuuuuuuuU" << std::endl;
}

void Cat::newIdea(int index, std::string idea)
{
	CatBrain->setIdea(index, idea);
}

void Cat::displayIdea(int index)
{
	std::cout << CatBrain->getIdea(index) << std::endl;
}
