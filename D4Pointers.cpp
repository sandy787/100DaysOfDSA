#include <iostream>
using namespace std;
int main(){
    int num=5;
    cout<<"Address of num:"<<&num<<endl;
    
    //ptr store  address of num
    //*ptr points to num value and the data type should be of num
    int *ptr=&num;
    (*ptr)++;
    cout<<num<<" OR "<<*ptr<<endl;
    //size of pointer (8)same as double
    cout<<sizeof(ptr)<<endl;

    //another way to declare
    int *p=0;
    p=&num;
    cout<<*p<<endl;
    //ptr arithmetic
    //If we increase address of int by 1 it increase by 4 bytes , for double by 8 bytes
    cout<<"before:"<<ptr<<endl;
    ptr=ptr+1;
    cout<<"after:"<<ptr<<endl;

    //Copying Pointer

    int *a=p;
    cout<<a<<"-"<<p<<endl;
    cout<<*a<<"-"<<*p<<endl;



} 