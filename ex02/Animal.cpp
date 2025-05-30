
#include "Animal.hpp"

AAnimal::AAnimal(std::string type) : type(type)
{
	std::cout << "Animal parametric constructor called" << std::endl;

}

AAnimal::AAnimal(): type("Animal")
{
	std::cout << "AAnimal Constructor called\n";
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor called\n";
}



AAnimal::AAnimal(AAnimal const & src)
{
	*this = src;
}

AAnimal& AAnimal::operator=(AAnimal const & src)
{
	type = src.type;
	return (*this);

}

std::string AAnimal::getType() const
{
	return (this->type);
}
void AAnimal::makeSound(void) const
{
	std::cout << "MeuhhhhhhhhhhhhhhhhhhhhhhhhhhhH" << std::endl;
}
