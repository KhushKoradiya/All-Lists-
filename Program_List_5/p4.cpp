/*#Write a C++ program to demonstrate order of constructor calls in Multiple Inheritance*/
#include <iostream>

class Shape {
public:
    virtual void draw() {
        std::cout << "Drawing a shape." << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

int main() {
    Shape* shapePtr;  // Base class pointer

    Circle circle;

    shapePtr = &circle;  // Point to a Circle object
    shapePtr->draw();    // Calls the overridden Circle::draw() method

    return 0;
}
