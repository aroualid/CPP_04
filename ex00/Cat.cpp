
#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat Constructor constructor called\n";
}

Cat::~Cat()
{
	std::cout << "Cat Destructor constructor called\n";
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
