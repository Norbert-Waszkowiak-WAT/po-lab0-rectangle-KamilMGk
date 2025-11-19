#include <iostream>

using namespace std;

class Rectangle{
    private:
    double width;
    double height;
    public:
    Rectangle(double w,double h):width(w),height(h) {}
    void setWidth(double w){
        width=w;
    }
    double getWidth()const{
        return width;
    }
    double getHeight()const{
        return height;
    }
    double area() const{
        return width*height;
    }
    double perimeter() const{
        return (2 * (width + height));
    }
void display() const{
    cout<<"Rectanagle: "<<width<<"x"<<height<<endl;
    cout<<"Area: "<<area()<<endl;
    cout<<"Perimeter: "<<perimeter()<<endl;
}
};
