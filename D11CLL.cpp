#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class CircularLL{
    Node* head;
    public:

    CircularLL(){
        head=NULL;
    }
    
    void InsertatStart(int data){
        Node* new_node=new Node(data);
        if(head==NULL){
            new_node->next=new_node;
            head=new_node;
            return;
        }
        Node* temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=new_node;
        new_node->next=head;
        head=new_node;
    }

    void InsertatEnd(int data){
        if(head==NULL){
            InsertatStart(data);
            return;
        }
        Node* new_node=new Node(data);
        Node* temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=new_node;
        new_node->next=head;
    }
    
    void Display(){
      Node* temp=head;
        do{
            cout<<temp->data<<" ";
            temp=temp->next;
        }while(temp!=head);
        cout<<endl;  
    }
    
    void deleteatStart(){
        Node* temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=head->next;
        head=head->next;
    }

    void delete_at(int index){
        Node *temp=head;
        if(index==0){
            deleteatStart();
            return;
        }
        for(int i = 1; i < index; i++)
        {   
            temp=temp->next;
        }
        Node *ptr=temp->next->next;
        temp->next->next=NULL;
        temp->next=ptr;
    }

    
};

int main(){
    CircularLL C;
    C.InsertatEnd(4);
    C.InsertatStart(3);
    C.InsertatEnd(2);
    C.InsertatEnd(7);
    C.InsertatStart(6);
    C.InsertatEnd(1);
    C.Display();
    C.delete_at(0);
    C.Display();
    C.delete_at(3);
    C.Display();
}