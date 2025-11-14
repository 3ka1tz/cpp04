# C++ - Module 04
Subtype Polymorphism, Abstract Classes, and Interfaces

## [Exercise 00: Polymorphism](https://github.com/3ka1tz/cpp04/tree/main/project/ex00)
**Turn-in directory:** ex00/  
**Files to turn in:** Makefile, main.cpp, *.cpp, *.{h, hpp}  
**Forbidden functions:** None

For every exercise, you have to provide the **most complete tests** you can. Constructors and destructors of each class must display specific messages. Don’t use the same message for all classes.

Start by implementing a simple base class called **Animal**. It has one protected attribute:  
- `std::string type;`

Implement a **Cat** class that inherits from Animal.
Implement a **Dog** class that inherits from Animal.  

These two derived classes must set their type field depending on their name. Then, the Cat’s type will be initialized to "Cat", and the Dog’s type will be initialized to "Dog". The type of the Animal class can be left empty or set to the value of your choice.

Every animal must be able to use the member function:  
`makeSound();`  
It will print an appropriate sound (cats don’t bark).

Running this code should print the specific sounds of the Dog and Cat classes, not the Animal’s.

```
int main()
{
  const Animal* animal = new Animal();
  const Animal* cat = new Cat();
  const Animal* dog = new Dog();

  std::cout << animal->getType() << " " << std::endl;
  animal->makeSound(); // will output a generic animal sound!
  std::cout << cat->getType() << " " << std::endl;
  cat->makeSound(); // will output the cat sound!
  std::cout << dog->getType() << " " << std::endl;
  dog->makeSound(); // will output the dog sound!
  ...

  return 0;
}
```

To ensure you understood how it works, implement a **WrongCat** class that inherits from a **WrongAnimal** class. If you replace the Animal and the Cat by the wrong ones in the code above, the WrongCat should output the WrongAnimal sound.

Implement and turn in more tests than the ones given above.

## [Exercise 01: I don’t want to set the world on fire](https://github.com/3ka1tz/cpp04/tree/main/project/ex01)
**Turn-in directory:** ex01/  
**Files to turn in:** Files from previous exercise + *.cpp, *.{h, hpp}  
**Forbidden functions:** None

Constructors and destructors of each class must display specific messages.

Implement a **Brain** class. It contains an array of 100 `std::string` called ideas. This way, Cat and Dog will have a private `Brain*` attribute.  
Upon construction, Cat and Dog will create their Brain using `new Brain();`  
Upon destruction, Cat and Dog will delete their Brain.

In your main function, create and fill an array of **Animal** objects. Half of it will be **Cat** objects and the other half will be **Dog** objects. At the end of your program execution, loop over this array and delete every Animal. You must delete directly dogs and cats as Animals. The appropriate destructors must be called in the expected order.

Don’t forget to check for **memory leaks**.

A copy of a Cat or a Dog mustn’t be shallow. Thus, you have to test that your copies are deep copies!

```
int main()
{
const Animal* cat = new Cat();
const Animal* dog = new Dog();

delete cat; // should not create a leak
delete dog;
...

return 0;
}
```

Implement and turn in more tests than the ones given above.

## [Exercise 02: Abstract class](https://github.com/3ka1tz/cpp04/tree/main/project/ex02)
**Turn-in directory:** ex02/  
**Files to turn in:** Files from previous exercise + *.cpp, *.{h, hpp}  
**Forbidden functions:** None

Creating Animal objects doesn’t make sense after all. It’s true, they make no sound!

To avoid any possible mistakes, the default Animal class should not be instantiable. Fix the Animal class so that nobody can instantiate it. Everything should work as before.

If you want to, you can update the class name by adding an A prefix to Animal.
