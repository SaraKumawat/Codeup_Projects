#include<iostream>
#include<cmath>
using namespace std;
class Point{
    public:
        float x;
        float y;
        Point(){}
        Point(float x,float y){
            this->x = x;
            this->y = y;
        }
        float distance(float x,float y){
            cout<<"Euclidean distance : ";
            return sqrt(pow((this->x - x),2) + pow((this->y - y),2));
        }
        void translate(float dx,float dy){
            this->x = x + dx;
            this->y = y + dy;
            cout<<"Translated point : "<<"("<<this->x<<","<<this->y<<")"<<endl;
        }
};
class Shape : public Point {
    public:
        Shape(){}
        virtual float get_area() = 0;
};
class Circle : public Shape {
    public:
        float radius;
        Circle (float radius){
            this->radius = radius;
        }
        float get_area() override{
            cout<<"Circle Area : ";
            return 3.14*pow(this->radius,2);
        }
};
class Square : public Shape {
    public:
        float side;
        Square(float side){
            this->side = side;
        }
        float get_area() override{
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
}