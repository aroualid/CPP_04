#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	Animal *animals[100];
	
	std::cout << "50 New DOGS \n";
	std::cout << "__________________________________________________________________"<< std::endl;
	for (int i = 0; i < 50; i++){
		animals[i] = new Dog;
	}
	std::cout << "50 New CATS \n";
	std::cout << "__________________________________________________________________"<< std::endl;
	for (int i = 50; i < 100; i++){
		animals[i] = new Cat;
	}
	std::cout << "__________________________________________________________________"<< std::endl;
	std::cout << std::endl;
	std::cout << "__________________________________________________________________"<< std::endl;
	for(int i = 40; i < 60; i++){
		std::cout << i <<  "   ";
		animals[i]->makeSound();
	}
	std::cout << "__________________________________________________________________"<< std::endl;
	for(int i = 0; i < 100; i++){
		delete (animals[i]);
	}
	
	std::cout << "__________________________________________________________________"<< std::endl;
	std::cout << std::endl;
	std::cout << "__________________________________________________________________"<< std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
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
