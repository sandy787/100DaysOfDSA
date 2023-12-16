//Sorting Using a Binary Search Tree;
//Time Complexity = O(n * logn )

#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int data){
            this->data=data;
            this->left=NULL;
            this->right=NULL;
        }
};

Node* InsertBST(Node* root,int val){
    if(root==NULL){
        return new Node(val);
    }
    if(val<root->data){
        root->left=InsertBST(root->left,val);
    }
    if(val>root->data){
        root->right=InsertBST(root->right,val);
    }
    return root;
}

void InorderTraversal(Node* root){
    if(root){
        InorderTraversal(root->left);
        cout<<root->data<<" ";
        InorderTraversal(root->right);
    }
}

int main(){
    
    
    int A[]={4,6,2,3,8,9};
    Node* root=new Node(A[0]);
    for(int i: A){
        InsertBST(root,i);
    }

    InorderTraversal(root);
}