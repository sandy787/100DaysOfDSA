#include <iostream>
using namespace std;

class Employee{
    public:
     Employee(){
        cout<<1;
     }
     ~Employee(){
        cout<<2;
     }
};
int main(){
    Employee e1;
    Employee e2;
    return 0;
}