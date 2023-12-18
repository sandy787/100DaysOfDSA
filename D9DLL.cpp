#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *prev;
    Node *next;
    

    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};

class DLinkedList{
    public:
    Node *head;

    DLinkedList(){
        this->head=NULL;
    }

    void InsertatStart(int data) {
        Node* new_node = new Node(data);
        if (head == NULL) {
            head = new_node;
        } else {
            new_node->next = head;
            head->prev = new_node;
            head = new_node;
        }
    }

    void InsertatEnd(int data){
        Node* new_node = new Node(data);
        if(head==NULL){
            head=new_node;
        }else{
            Node* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            new_node->prev=temp;
            temp->next=new_node;
            
        }
    }

    void Insertat(int index,int data ){
         Node *new_node=new Node(data);
        Node *temp=head;
        for(int i = 0; i <index-1; i++)
        {   
            temp=temp->next;
        }
        new_node->next=temp->next;
        temp->next->prev=new_node;
        temp->next = new_node;
        new_node->prev = temp;
    }

    void displayForward(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    void displayBackward() {
    Node *temp = head;
    while (temp != NULL && temp->next != NULL) {
        temp = temp->next;
    }
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
    }

    void delete_atStart() {
    if (head != NULL) {
        Node *temp = head->next;
        if (temp != NULL) {
            temp->prev = NULL;
            head->next = NULL;
            head = temp;
        } else {
            head = NULL;
        }
        }
    }

void delete_atEnd() {
    if (head != NULL) {
        if (head->next != NULL) {
            Node *temp = head;
            while (temp->next->next != NULL) {
                temp = temp->next;
            }
            temp->next->prev = NULL;
            temp->next = NULL;
        } else {
            head = NULL;
        }
    }
}

void delete_at(int index) {
    if (index == 0) {
        delete_atStart();
    } else {
        Node *temp = head;
        for (int i = 0; i < index - 1 && temp != NULL; i++) {
            temp = temp->next;
        }
        if (temp != NULL && temp->next != NULL) {
            Node *ptr = temp->next->next;
            temp->next->next = NULL;
            temp->next->prev = NULL;
            temp->next = ptr;
            if (ptr != NULL) {
                ptr->prev = temp;
            }
        } else {
            cout << "Index out of bounds." << endl;
        }
    }
}


};
int main(){
    DLinkedList D;
    D.InsertatStart(2);
    D.InsertatStart(4);
    D.InsertatStart(6);
     D.InsertatStart(8);
    
    D.InsertatEnd(10);
    D.Insertat(2,3);
    cout<<"Displaying in Forward:";
    D.displayForward();
    D.delete_atStart();
    D.delete_atEnd();
    D.delete_at(2);
    D.displayForward();
    cout<<"Displaying in Backward:";
    D.displayBackward();
    return 0;

}