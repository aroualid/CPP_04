
#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog:public Animal {

public:
	Dog();
	Dog(Dog const & src);
	~Dog();
	Dog &operator=(Dog const & src);
	virtual void makeSound(void) const;
	std::string getType() const;
private:
};

#endif
