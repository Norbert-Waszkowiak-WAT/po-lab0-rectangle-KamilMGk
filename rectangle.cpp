#include <iostream>

class Rectangle {
private:
   double width;
   double height;

public:
   Rectangle(double w, double h) : width(w), height(h) {}
   void setWidth(double w) { width = w; }
   void setHeight(double h) { height = h; }
   double getWidth() const { return width; }
   double getHeight() const { return height; }
   double area() const { return width * height; }
   double perimeter() const { return 2 * (width + height); }
   void display() const {
      std::cout << "Width: " << width << ", Height: " << height << std::endl;
      std::cout << "Area: " << area() << std::endl;
      std::cout << "Perimeter: " << perimeter() << std::endl;
   }
};
            