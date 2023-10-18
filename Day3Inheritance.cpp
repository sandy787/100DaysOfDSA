#include <iostream>
using namespace std;
class Shape{
    public:
    int l;
    int b;
    
    void area(int l, int b){}
};
class Rectangle:private Shape{
    public:
    void area(int l,int b){
        cout<<"Area of Rectangle:"<<l*b<<endl;
    }
};
class Triangle:private Shape{
    public:
    void area(int l,int b){
        cout<<"Area of Triangle:"<<l*b*0.5<<endl;
    }
};
int main(){
    Rectangle obj1;
    Triangle obj2;
    obj1.area(5,6);
    obj2.area(5,6);
    }
