#include <iostream>
using namespace std;

int main(){

    int s=6;

    //box
    for(int i=1;i<=s;i++){
        for(int j=1;j<=s;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;

    //Hollow Box
    for(int i=1;i<=s;i++){
        for(int j=1;j<=s;j++){
            if(i==1||i==s){
                cout<<"*";
            }else if(j==1||j==s){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;

    //Left triangle
    for(int i=1;i<=s;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;

    //Right triangle
    for(int i=1;i<=s;i++){
        for(int j=1;j<=s;j++){
            if(j<=s-i){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    cout<<endl;

    //left down traingle
    for(int i=1;i<=s;i++){
        for(int j=s-i+1;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;

    //right down triangle
    for(int i=1;i<=s;i++){
        for(int j=1;j<=s;j++){
            if(j<i){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

}