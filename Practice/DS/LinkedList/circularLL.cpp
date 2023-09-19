#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int d){
            this->data = d;
            this->next =NULL;
        }
};

void print(Node* tail){
    
    if(tail ==NULL){
        cout<<"list is empty";
    }

    Node* temp=tail;
    do{
        cout<<tail -> data<<" ";
        tail =tail -> next;
    }while(tail != temp);

    }

void insertNode(Node* &tail,int element,int d){

    if(tail == NULL){
        Node* temp =new Node(d);
        tail = temp;
        temp -> next = temp;
    }

    else{
        Node* temp =new Node(d);
        Node* curr = tail;
        while(curr -> data != element){
            curr = curr -> next;
        }
        temp -> next = curr -> next;
        curr -> next = temp;
    }
    cout<<endl;
}

void deleteNode(Node* &tail ,int val){
    if(tail == NULL){
        cout<< " list is empty "<<endl;
    }

    else{
        Node* prev=tail;
        Node* curr=prev->next;

        while(curr -> data != val){
            prev = curr;
            curr = curr -> next;
        }

        prev->next=curr->next;
        curr->next=NULL;
        
        if(curr==prev){
            tail=NULL;
        }

        if(tail ==curr){
            tail=prev;
        }

        delete curr;
    }
    cout<<endl;
}

int main()
{
    Node* tail =NULL; 
    
    insertNode(tail,5,10);
    print(tail);

    insertNode(tail,10,15);
    print(tail);

    // insertNode(tail,15,25);
    // print(tail);

    // insertNode(tail,25,30);
    // print(tail);

    // insertNode(tail,30,40);
    // print(tail);

    deleteNode(tail,10); 
    print(tail);

    return 0;
}