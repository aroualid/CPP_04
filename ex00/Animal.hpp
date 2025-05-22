
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
class Animal {

public:
	Animal(std::string type);
	Animal();
	Animal(Animal const & src);
	virtual ~Animal();
	Animal &operator=(Animal const & src);
	virtual void makeSound(void) const;
	std::string getType() const;
protected:
	std::string type;
};

#endif
