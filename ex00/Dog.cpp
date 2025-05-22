
#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog Constructor constructor called\n";
}

Dog::~Dog()
{
	std::cout << "Dog Destructor constructor called\n";
}

Dog::Dog(Dog const & src)
{
	*this = src;
}

Dog& Dog::operator=(Dog const & src)
{
	type = src.type;
	return (*this);
}

std::string Dog::getType() const
{
	return (this->type);
}
void Dog::makeSound(void) const
{
	std::cout << "WooufffffffffffffffffffffffffffffF" << std::endl;
}
