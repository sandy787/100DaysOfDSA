#include <iostream>
 using namespace std;
 int main(){
    // Array Declared like: data_type Array_name[size or empty]={values};
    int n;
    cout<<"Enter Size of Array:";
    cin>>n;
    int Arr[n];
    //Taking values using a for loop
    cout<<"Enter Array Elements:";
    for(int i=0;i<n;i++){
        cin>>Arr[i];
    } 
    cout<<"Array: ";
    //Display array 
    for(int i=0;i<n;i++){
        cout<<Arr[i]<<" ";
    }

    //Linear Search in An Array 
    cout<<"=================\nEnter the key :";
    int key;
    cin>>key;
    for(int i=0;i<n;i++){
        if(Arr[i]==key){
            cout<<"Match Found at:"<<i;
            break;}
            
    }

        
        
    


  


 }