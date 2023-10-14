#include <iostream>
using namespace std;

int main(){
   /* cout<<"Hello World"; */

   int a=10;
   int b=20;

//    cout<<a+b<<endl;
//    cout<<a-b<<endl;
//    cout<<a*b<<endl;
//    cout<<a/b<<endl;//only integer quotient
//    cout<<a%b<<endl;//remainder after integer division
//    cout<<a++<<endl;
//    cout<<a--<<endl;
   

   //FLOW CONTROL
   if(1>2){
    cout<<"impossible";
   }else if(1<2){
    cout<<"possible";
   }else{
    cout<<"Idk";
   }

  //LOOPS
   int i=1;
   while(i<=5){
    cout<<i<<endl;
    i++;
   }

   for(int i=1;i<=5;i++){
    cout<<i<<endl;
   }
   
   do{cout<<i<<endl;
   i++;}while(i<5);
   
   for(int i=0;i<5;i++){
    for(int j=1;j<6;j++){
        cout<<j<<" ";
    }
    cout<<endl;
   }

// LOOP Control Statements
    
    for(int i=1;i<=5;i++){
        if(i==3){
           break;
        }
    cout<<i<<' ';
   }

   for(int i=1;i<=5;i++){
        if(i==3){
           continue;
        }
    cout<<i<<' ';
   }
   

    return 0;
}