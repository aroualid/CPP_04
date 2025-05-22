
#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

class WrongCat {

public:
	WrongCat();
	WrongCat(WrongCat const & src);
	~WrongCat();
	WrongCat &operator=(WrongCat const & src);

private:
};

#endif
