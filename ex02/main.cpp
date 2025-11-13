#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    // const AAnimal* animal = new AAnimal();
    const AAnimal* cat = new Cat();
    const AAnimal* dog = new Dog();

    // animal->makeSound();
    cat->makeSound();
    dog->makeSound();

    delete cat;
    delete dog;

    return 0;
}
