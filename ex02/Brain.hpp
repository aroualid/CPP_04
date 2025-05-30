
#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
class Brain {

public:
	Brain();
	Brain(Brain const & src);
	~Brain();
	Brain &operator=(Brain const & src);
	std::string getIdea(int index) const;
	void setIdea(int index, std::string idea);
private:
	std::string ideas[100];
};

#endif
