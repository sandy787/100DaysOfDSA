// Insertion sort
//time complexity average O(n^2)
#include <iostream>
using namespace std;

void InsertionSort(int A[], int n){
    int key;
    int j;
    for(int i=1;i<n;i++){
        key=A[i];
        j=i-1;
        while(j>=0 && A[j]>key){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}

int main(){
    int A[]={4,6,2,3,8,6,9};
    InsertionSort(A,7);
    return 0;
}