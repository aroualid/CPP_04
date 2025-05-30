
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
class AAnimal {

public:
	AAnimal(std::string type);
	AAnimal();
	AAnimal(AAnimal const & src);
	virtual ~AAnimal();
	AAnimal &operator=(AAnimal const & src);
	virtual void makeSound(void) const = 0;
	std::string getType() const;
protected:
	std::string type;
};

#endif
