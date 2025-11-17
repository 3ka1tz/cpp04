#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    const int size = 10;
    Animal* animals[size];

    for (int i = 0; i < size / 2; i++) {
        animals[i] = new Cat();
    }

    for (int i = size / 2; i < size; i++) {
        animals[i] = new Dog();
    }

    for (int i = 0; i < size; i++) {
        animals[i]->makeSound();
    }

    for (int i = 0; i < size; i++) {
        delete animals[i];
    }

    Cat originalCat;
    originalCat.setIdea(0, "Old idea0");
    originalCat.setIdea(1, "Old idea1");

    Cat copiedCatA(originalCat);
    copiedCatA.setIdea(0, "New idea0");

    Cat copiedCatB;
    copiedCatB = originalCat;
    copiedCatB.setIdea(1, "New idea1");

    std::cout << "originalCat Idea[0]: " << originalCat.getIdea(0) << std::endl;
    std::cout << "originalCat Idea[1]: " << originalCat.getIdea(1) << std::endl;
    std::cout << "copiedCatA  Idea[0]: " << copiedCatA.getIdea(0) << std::endl;
    std::cout << "copiedCatA  Idea[1]: " << copiedCatA.getIdea(1) << std::endl;
    std::cout << "copiedCatB  Idea[0]: " << copiedCatB.getIdea(0) << std::endl;
    std::cout << "copiedCatB  Idea[1]: " << copiedCatB.getIdea(1) << std::endl;

    return 0;
}
