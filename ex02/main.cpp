#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	//const AAnimal* k = new AAnimal();

	Dog Dog1;
	Cat Cat1;
	Dog Dog2;
	Cat Cat2;
	Dog2 = Dog1;
	Cat2 = Cat1;
	Dog2.newIdea(5,"chihuahua");
	Cat2.newIdea(5,"maincoon");
	Dog1.displayIdea(5);
	Dog2.displayIdea(5);
	Cat1.displayIdea(5);
	Cat2.displayIdea(5);
	std::cout << "__________________________________________________________________"<< std::endl;
	delete j;//should not create a leak	
	delete i;
}
