
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
class WrongAnimal {

public:
	WrongAnimal(std::string type);
	WrongAnimal();
	WrongAnimal(WrongAnimal const & src);
	virtual ~WrongAnimal();
	WrongAnimal &operator=(WrongAnimal const & src);
	void makeSound(void) const;
	std::string getType() const;
protected:
	std::string type;
};

#endif
