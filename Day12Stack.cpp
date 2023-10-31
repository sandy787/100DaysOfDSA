#include <iostream>
using namespace std;
class Node{
    public:
    char data;
    Node *next;
 
    Node(char data){
        this->data=data;
        this->next=NULL;
    }
};

class Stack{
    Node *top;
    public:
    Stack(){
        top=NULL;
    }

    bool isEmpty(){
        if(top==NULL){
            return true;
        }return false;
    }

    void push(char data){
        Node *new_node=new Node(data);
        new_node->next=top;
        top=new_node;
    }

    void pop(){
        Node* toDelete;
        toDelete=top;
        top=top->next;
        delete(toDelete);
    }

    void Display(){
        Node* ptr=top;
        while(ptr!=NULL){
            cout<<ptr->data<<"-> ";
            ptr=ptr->next;
        }
        cout<<endl;
    }
};

int main(){
    Stack S;
    S.isEmpty();
    S.push('a');
    S.push('b');
    S.push('c');
    S.push('d');
    S.Display();
    S.pop();
    S.Display();
}