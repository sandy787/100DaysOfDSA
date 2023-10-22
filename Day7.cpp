#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(){
        data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class LinkedList{
    Node *head;
    public:
    LinkedList(){
        this->head=NULL;
    }
    
    void insertatStart(int data){
        Node *new_node=new Node(data);
        new_node->next=head;
        head=new_node;
    }
    void insertatEnd(int data){
        Node *new_node=new Node(data);
        Node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }
    
    void insert_at(int data,int index){
        Node *new_node=new Node(data);
        Node *temp=head;
        for(int i = 0; i <index-1; i++)
        {   
            temp=temp->next;
        }
        new_node->next = temp->next;
        temp->next = new_node;
    }

    void display(){
        Node *temp=head;
        if(head==NULL){
            cout<<"List is Empty!"<<endl;
        }

        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }

    }       

    void delete_atStart(){
        Node *temp=head->next;
        head->next=NULL;
        head=temp;
    }
    
    void delete_atEnd(){
        Node *temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
    }

    void delete_at(int index){
        Node *temp=head;
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
    LinkedList l;
    l.insertatStart(4);
    l.insertatStart(1);
    l.insertatEnd(2);
    l.insertatStart(5);
    l.insertatStart(6);
    l.insertatEnd(9);
    l.insertatStart(5);
    l.insertatStart(6);
    
    l.display();
    cout<<endl;

    l.delete_atStart();
    l.display();
    cout<<endl;

    l.delete_atEnd();
    l.display();
    cout<<endl;

    l.delete_at(3);
    l.display();
    cout<<endl;

    l.insert_at(1,2);
    l.display();

}