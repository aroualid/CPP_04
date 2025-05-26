#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	std::cout << "expected output in (): \n";
	std::cout << "___________________________CONSTRUCTOR___________________________"<< std::endl;
	std::cout << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongAnimal();
	const WrongAnimal* l = new WrongCat();
	
	std::cout << "__________________________________________________________________"<< std::endl;
	std::cout << std::endl;
	
	std::cout << meta->getType() << "	(Animal) " << std::endl;
	std::cout << j->getType() << "	(Dog) " << std::endl;
	std::cout << i->getType() << "	(Cat) " << std::endl;

	std::cout << "__________________________________________________________________"<< std::endl;
	std::cout << std::endl;
	
	std::cout << i->getType() << " sound is : ";
	i->makeSound();
	std::cout << j->getType() << " sound is : ";
	j->makeSound();
	std::cout << meta->getType() << " sound is : ";
	meta->makeSound();

	std::cout << "__________________________________________________________________"<< std::endl;
	std::cout << std::endl;
	
	std::cout << k->getType() << "	(WrongAnimal) " << std::endl;
	std::cout << l->getType() << "	(WrongCat)" << std::endl;
	
	std::cout << "__________________________________________________________________"<< std::endl;
	std::cout << std::endl;
	
	std::cout << k->getType() << " sound is : ";
	k->makeSound();
	std::cout << l->getType() << " sound is : ";
	l->makeSound();
	
	std::cout << "___________________________DESTRUCTOR___________________________"<< std::endl;
	std::cout << std::endl;
	
	delete meta;
	delete i;
	delete j;
	delete k;
	delete l;
	return 0;
}
