
#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog:public Animal {

public:
	Dog();
	Dog(Dog const & src);
	~Dog();
	Dog &operator=(Dog const & src);
	virtual void makeSound(void) const;
	std::string getType() const;
	void newIdea(int index, std::string idea);
	void displayIdea(int index);
private:
	Brain *DogBrain;
};

#endif
