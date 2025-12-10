#include "rectangle.cpp"
 
int main() {
    Rectangle rect(10, 5);
 
    rect.display();
 
    double width = rect.getWidth();
    double height = rect.getHeight();
    std::cout << "Width: " << width << ", Height: " << height << "\n";
 
    double area = rect.area();
    double perimeter = rect.perimeter();
    std::cout << "Area: " << area << ", Perimeter: " << perimeter << "\n";
 
    rect.setWidth(15);
    rect.setHeight(8);
    rect.display();
 
    width = rect.getWidth();
    height = rect.getHeight();
    std::cout << "New Width: " << width << ", New Height: " << height << "\n";
 
    area = rect.area();
    perimeter = rect.perimeter();
    std::cout << "New Area: " << area << ", New Perimeter: " << perimeter << "\n";
 
    return 0;
}