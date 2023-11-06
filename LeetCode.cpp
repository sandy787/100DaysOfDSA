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
int main() {
    LinkedList l;
    int ch, ele, n;

    cout << "Enter your choice (1 for inserting at the start, 2 for inserting at the end): ";
    cin >> ch;

    cout << "Enter the number of nodes: ";
    cin >> n;
      
    
    // switch (ch) {
    //     case 1:
    //         cout << "Enter " << n << " elements for inserting at the start:\n";
    //         for (int i = 0; i < n; i++) {
    //             cout << "Enter element: ";
    //             cin >> ele;
    //             l.insertatStart(ele);
    //         }
    //         break;
    //     case 2:
    //         cout << "Enter " << n << " elements for inserting at the end:\n";
    //         for (int i = 0; i < n; i++) {
    //             cout << "Enter element: ";
    //             cin >> ele;
    //             l.insertatEnd(ele);
    //         }
    //         break;
    //     default:
    //         cout << "Invalid choice" << endl;
    //         break;
    // }

    cout << "Linked List after insertion: ";
    l.display();

    return 0;
}