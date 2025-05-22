
#include "Animal.hpp"

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal parametric constructor called" << std::endl;

}

Animal::Animal(): type("Animal")
{
	std::cout << "Animal Constructor constructor called\n";
}

Animal::~Animal()
{
	std::cout << "Animal Destructor constructor called\n";
}



Animal::Animal(Animal const & src)
{
	*this = src;
}

Animal& Animal::operator=(Animal const & src)
{
	type = src.type;
	return (*this);

}

std::string Animal::getType() const
{
	return (this->type);
}
void Animal::makeSound(void) const
{
	std::cout << "*weird animal sound*" << std::endl;
}
