#include <iostream>
#include "rectangle.cpp"

int main() {
    Rectangle rect(10.0, 5.0);
    rect.display();

    rect.setWidth(15.0);
    rect.setHeight(8.0);
    std::cout << "After resize:\n";
    rect.display();

    return 0;
}
