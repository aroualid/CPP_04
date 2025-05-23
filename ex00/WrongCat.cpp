
#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Constructor constructor called\n";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor constructor called\n";
}


WrongCat::WrongCat(WrongCat const & src)
{
	*this = src;
}

WrongCat& WrongCat::operator=(WrongCat const & src)
{
	type = src.type;
	return (*this);
}

std::string WrongCat::getType() const
{
	return (this->type);
}
void WrongCat::makeSound(void) const
{
	std::cout << "TA TA TA DAM CE TRAIN TER 2305905 EN DIRECTION DE PARIS SAINT LAZARE EST RETARDE" << std::endl;
}
