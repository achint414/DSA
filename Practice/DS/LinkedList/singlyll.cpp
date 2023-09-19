#include<iostream>
using namespace std;

class Node{
   public: 
        int data=10; 
        Node* next;
        
        Node(int data){
            this->data=data;  
            this->next=NULL; 
        }
        
        // ~Node(){
        //     int value = this -> data;
        //     if(this -> next != NULL){
        //         delete next;
        //         this -> next = NULL;
        //     }
        //     cout<<"memory is free for node with data "<<value<<endl; 
        // }
};

void InsertAtHead(Node* &head,int d){
    
    Node* temp=new Node(d);
    temp -> next = head;
    head = temp; 
}

void InsertAtTail(Node* &tail,int d){
    
    Node *temp = new Node(d);
    tail->next=temp;
    tail=temp;

}

void InsertAtPosition(Node* &head,Node* &tail,int pos,int d){

    if(pos==1){
        InsertAtHead(head,d);
        return ;
    }

    Node* temp=head;
    int cnt=1;
    while(cnt<pos-1){                       //
        temp = temp -> next;
        cnt++;
    }

    if(temp -> next ==NULL){
        InsertAtTail(tail,d);
        return ;
    }

    Node* nodeToInsert=new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}

void deleteNode(int pos,Node* &head){
    
if(pos ==1){
    Node* temp=head;
    head = head -> next;
    temp -> next =NULL;
    delete temp;
}

else{

    Node* prev=NULL;
    Node* curr=head; 
    int cnt=1;
    while(cnt < pos){
        prev=curr;
        curr=curr -> next;
        cnt++;
    }

    prev -> next = curr -> next;
    curr -> next = NULL;
    delete curr;
}
    
}


void print(Node* &head){
    Node* temp=head;

 while(temp != NULL){
    cout << temp -> data <<" ";
    temp = temp -> next;
 }
 cout<<endl;
}

int main()
{

    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;

    print(head);

    // InsertAtHead(head,12);
    // print(head);

    // InsertAtHead(head,15);
    // print(head);

    // InsertAtTail(tail,20);
    // print(head);

    // InsertAtTail(tail,30);
    // print(head);

    InsertAtTail(tail,20);
    print(head);

    InsertAtTail(tail,40);
    print(head);

    InsertAtPosition(head,tail,3,30);
    print(head);

    InsertAtPosition(head,tail,5,50);
    print(head);

    // cout<<"head"<<head->data<<endl;  
    // cout<<"tail"<<tail->data<<endl;

    deleteNode(3,head);
    print(head);


    return 0;
} 