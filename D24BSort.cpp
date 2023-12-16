// Bubble sort
//time complexity average O(n^2)
#include <iostream>
using namespace std;

void BubbleSort(int A[], int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            if(A[j]<A[j-1]){
                swap(A[j],A[j-1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}

int main(){
    int A[]={4,6,2,3,8,6,9};
    BubbleSort(A,7);
    return 0;
}