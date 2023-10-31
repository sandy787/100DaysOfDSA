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