
#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog Constructor called\n";
	DogBrain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called\n";
	delete DogBrain;
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

void Dog::newIdea(int index, std::string idea)
{
	DogBrain->setIdea(index, idea);
}

void Dog::displayIdea(int index)
{
	std::cout << DogBrain->getIdea(index) << std::endl;
}

