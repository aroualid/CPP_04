
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

class WrongAnimal {

public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const & src);
	~WrongAnimal();
	WrongAnimal &operator=(WrongAnimal const & src);

private:
};

#endif
