#include <iostream>
using namespace std;
class Student{
    int roll;
    string name;
    public:
    Student(int r, string n){
        roll=r;
        name=n;
    }
    Student(Student &obj){
        roll=obj.roll+1;
        name=obj.name+"esh";
    }
    void display(){
        cout<<"Roll:"<<roll<<" Name:"<<name<<endl;
    }
};
int main(){
    class Student a(101,"Ram");
    a.display();
    Student b(a);
    b.display();
}