
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "WrongAnimal parametric constructor called" << std::endl;

}

WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
	std::cout << "WrongAnimal Constructor constructor called\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor constructor called\n";
}



WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	*this = src;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const & src)
{
	type = src.type;
	return (*this);

}

std::string WrongAnimal::getType() const
{
	return (this->type);
}
void WrongAnimal::makeSound(void) const
{
	std::cout << "VroooooooooooooommmmmmmmmmmmmmmmmmmM" << std::endl;
}

