#include <iostream>

#include "Cat.hpp"

int main() {
    Cat originalCat;
    originalCat.setIdea(0, "Old idea0");
    originalCat.setIdea(1, "Old idea1");

    Cat copiedCat = originalCat;
    copiedCat.setIdea(0, "New idea0");

    std::cout << "originalCat Idea[0]: " << originalCat.getIdea(0) << std::endl;
    std::cout << "originalCat Idea[1]: " << originalCat.getIdea(1) << std::endl;
    std::cout << "copiedCat   Idea[0]: " << copiedCat.getIdea(0) << std::endl;
    std::cout << "copiedCat   Idea[1]: " << copiedCat.getIdea(1) << std::endl;

    return 0;
}
