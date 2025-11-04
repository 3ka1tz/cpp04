#include <iostream>

#include "Cat.hpp"

int main() {
    Cat originalCat;
    originalCat.setIdea(0, "I want fish");
    originalCat.setIdea(1, "I want milk");

    Cat copiedCat = originalCat;
    copiedCat.setIdea(0, "I want tuna");

    std::cout << "Original Cat Idea[0]: " << originalCat.getIdea(0) << std::endl;
    std::cout << "Original Cat Idea[1]: " << originalCat.getIdea(1) << std::endl;
    std::cout << "Copied   Cat Idea[0]: " << copiedCat.getIdea(0) << std::endl;
    std::cout << "Copied   Cat Idea[1]: " << copiedCat.getIdea(1) << std::endl;

    return 0;
}
