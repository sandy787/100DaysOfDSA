#include <iostream>
using namespace std;
 class Student{
       int roll;
       string name;
       public:
        Student(int roll,string name){
        this->name=name;
        this->roll=roll;
       }

       void S_details(){
        cout<<"Name:"<<name<<" Roll:"<<roll<<endl;
       }

 };
 int main(){
    Student obj1(101,"Prajwal");
    Student obj2(102,"Rahul");
    obj1.S_details();
    obj2.S_details();
    
 }
