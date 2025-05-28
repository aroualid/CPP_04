
#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat:public Animal {

public:
	Cat();
	Cat(Cat const & src);
	~Cat();
	Cat &operator=(Cat const & src);
	void makeSound(void) const;
	std::string getType() const;
	void newIdea(int index, std::string idea);
	void displayIdea(int index);
private:
	Brain * CatBrain;
};

#endif
