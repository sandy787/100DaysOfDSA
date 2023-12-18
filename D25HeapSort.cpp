#include <iostream>
using namespace std;

//using MAX Heap
void Heapify(int A[],int n, int i){
    int large=i;
    int left=2*i +1;
    int right=2*i +2;
    if(left < n && A[left]>A[large])
        large=left;
    if(right< n && A[right]>A[large])
        large=right;
    if(large == i)
        return;
    swap(A[large],A[i]);
    Heapify(A , n ,large);
}

void BuildHeap(int A[],int n){
    for(int i=n/2 -1;i>=0;--i){
        Heapify(A, n, i);
    }
}

void HeapSort(int A[],int n){
    BuildHeap(A,n);
    for(int i=n-1;i>=0;--i){
        swap(A[i],A[0]);
        Heapify(A,i,0);
    }
}

int main(){
    int size =8;
    int A[8]={7,3,8,2,9,1,5,1};
    HeapSort(A ,size);
    
    for(int i: A){
        cout<<i<<" ";
    }
}