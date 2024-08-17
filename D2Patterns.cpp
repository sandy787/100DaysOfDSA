#include <iostream>
using namespace std;

int main(){
    int n=5;
    
    // Box star pattern
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    //Hollow star pattern
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(i==0||i==n-1){
            cout<<"*";
           }else if(j==0||j==n-1){
            cout<<"*";
           }else{
            cout<<" ";
           }
        }
        cout<<endl;
    }
    cout<<endl;

    //left triangle star pattern

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    //Right Triangle star
    for(int i=0;i<n;i++){
        for(int j=0;j<n+1;j++){
            if(j<n-i){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    cout<<endl;

    //Left Down Triangle
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    //Hollow Left Triangle 
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i==0||i==n-1){
                cout<<"*";
            }else if(j==0||j==i){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    cout<<endl;
    //Pyramid Up
    int k=n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j >= k){
                cout << "* ";
            }else{
                cout << " ";}
        }
        k--;
        cout <<endl;
    }
    


    

}