#include<iostream>
#include<cmath>
using namespace std;
// base class
class Point{
    public:
        float x;
        float y;
        Point(){} // default constructor
        Point(float x,float y){ // parameterised constructor to initiate attributes
            this->x = x;
            this->y = y;
        }
        float distance(float x,float y){ // method to calcuate euclidean distance
            cout<<"Euclidean distance : ";
            return sqrt(pow((this->x - x),2) + pow((this->y - y),2)); // sqrt((x2 - x1)^2 + (y2 - y1)^2)
        }
        void translate(float dx,float dy){ // translating a pt(x,y) with dx in x-direction and dy in y-direction
            this->x = x + dx;
            this->y = y + dy;
            cout<<"Translated point : "<<"("<<this->x<<","<<this->y<<")"<<endl;
        }
};
// Point -> Shape
class Shape : public Point {
    public:
        Shape(){} // default constructor
        virtual float get_area() = 0; // virtual function (to be implemented by child class)
};
// Point -> Shape -> Circle
class Circle : public Shape {
    public:
        float radius;
        Circle (float radius){ // parameterised constructor to initiate the attributes
            this->radius = radius;
        }
        float get_area() override{ // implementing the virtual function inherited from the parent class
            cout<<"Circle Area : ";
            return 3.14*pow(this->radius,2);
        }
};
// Point -> Shape -> Square
class Square : public Shape {
    public:
        float side;
        Square(float side){ // parameterised constructor to initiate the attributes
            this->side = side;
        }
        float get_area() override{ // implementing the virtual function inherited from the parent class
            cout<<"Square Area : ";
            return pow(side,2);
        }
};
int main(){
    Point p1(0,0);
    cout<<p1.distance(3,4)<<endl;

    Circle c1(5);
    cout<<c1.get_area()<<endl;

    Square s1(2);
    cout<<s1.get_area()<<endl;

    p1.translate(1,2);

    return 0;
}
