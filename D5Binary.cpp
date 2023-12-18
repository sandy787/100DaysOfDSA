#include <iostream>
#include <vector>
using namespace std;
int main(){
    int size=8;
    cout<<"Enter the limit:"<<endl;
    cin>>size;
    int low=0;
    int high=size-1;
    cout<<"Enter Array Elements:";
    int S_Arr[size];
    for(int i=0;i<size;i++){
        cin>>S_Arr[i];
    }
    
    cout<<"Enter the Key:";
    int key;
    cin>>key;
    for(int i=0;i<size;i++){
        int mid=(low+high)/2;
            if(S_Arr[mid]==key){
                cout<<endl<<"Match Found at:"<<mid;
                break;
            }else if(S_Arr[mid]>key){
                high=mid-1;
            }else{
                low=mid+1;
            }          

    }


}