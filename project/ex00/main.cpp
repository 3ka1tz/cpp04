#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* animal = new Animal();
    const Animal* cat = new Cat();
    const Animal* dog = new Dog();

    std::cout << animal->getType() << " " << std::endl;
    animal->makeSound();
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound();
    std::cout << dog->getType() << " " << std::endl;
    dog->makeSound();

    delete animal;
    delete cat;
    delete dog;

    const WrongAnimal* wrongAnimal = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongAnimal->getType() << " " << std::endl;
    wrongAnimal->makeSound();
    std::cout << wrongCat->getType() << " " << std::endl;
    wrongCat->makeSound();

    delete wrongAnimal;
    delete wrongCat;

    return 0;
}
