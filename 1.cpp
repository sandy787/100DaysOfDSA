#include <iostream>
using namespace std;
void swap(int x,int y){
    int temp,a,b;
    temp=y;
    b=x;
    a=temp;
    cout<<x<<":"<<y<<" Swapped:"<<a<<":"<<b;
    
}
int factorial(int n){
   if(n==1||n==0){
    return 1;
   }else{
   return n*factorial(n-1);
   }
}

bool palindrome(string s){
    string rev;
    int n=s.size();
    for(int i=n;i<0;i--){
        rev[n-i]=s[i];
    }
    if(rev==s){
        return true;
    }else{
        return false;
    }
}
int main(){
   cout<<palindrome("Hello")<<endl;
   cout<<palindrome("12321")<<endl;
   



}