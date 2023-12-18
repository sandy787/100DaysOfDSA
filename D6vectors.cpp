#include <iostream>
#include <vector>
using namespace std;

int main(){
    //If a vector becomes overflowed it doubles its size(increases like 1,2,4,8,/...)

    //vector<datatype> vector_name;
    //or vector<datatype> vector_name(size,intialize_with);

    vector<int> v;
    //Insert 1 by 1 like append
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    //Capacity
    cout<<"Capacity:"<<v.capacity()<<endl;
    //Size
    cout<<"Size before pop:"<<v.size()<<endl;
    
    //Display by for each
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    //remove last inserted means last element
    v.pop_back();
    //Size
    cout<<"Size after pop:"<<v.size()<<endl;

    //Display by for each
    for(int i:v){
        cout<<i<<" ";
    }

    //Display st specific
    cout<<endl<<"Element at index 2:"<<v.at(2)<<endl;

    //Copy Vectors
    vector<int> a(v);
    cout<<"Copied Vector a:";
    for(int i:a){
        cout<<i<<" ";
    }
    

    //Initialize with size 
    vector<int> scores(5);
}
