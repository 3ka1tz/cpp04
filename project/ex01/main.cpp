#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* cat = new Cat();
    const Animal* dog = new Dog();

    delete cat;
    delete dog;

    return 0;
}
