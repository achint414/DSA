#include<iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }

    ~Node(){

    }

};

void print(Node* head){
    Node* temp=head;

    while(temp!=NULL){
        cout << temp -> data <<" ";
        temp = temp -> next;
    } 
    cout<<endl;
}

// void getLength(Node* head){
//  Node* temp=head;
//  int len=0;  
//     while(temp!=NULL){
//         len++;
//         temp = temp -> next;
//     }
//     cout<<"length= "<<len<<endl;
// }

void insertAtHead(Node* &head,Node* &tail,int d){
    Node* temp= new Node(d);

    if(head == NULL){
        head = temp;    
        tail = temp;
    }
    else{
        temp -> next =head;
        head -> prev =temp;
        head = temp; 
    }
   
}
 
void insertAtTail(Node* &tail,Node* &head,int d){
    Node* temp=new Node(d);
    
    if(tail == NULL){
        tail = temp;
        head = temp;
    }
    else{
        temp -> prev =tail;
        tail -> next =temp;
        tail=temp;
    }
    
}

void insertAtPosition(Node* &head,Node* &tail,int pos,int d){

    if(pos==1){
        insertAtHead(head,tail,d);
        return ;
    }

    Node* temp = head;
    int cnt=1;
    while(cnt < pos-1){
        temp = temp -> next;
        cnt++;
    } 

    if(temp -> next ==NULL){
        insertAtTail(tail,head,d);
        return ;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next =  temp -> next;
    temp -> next -> prev = nodeToInsert;
    nodeToInsert -> prev = temp;
    temp -> next = nodeToInsert;

}


void deleteNode(int pos,Node* &head,Node* &tail){
    
if(pos ==1){
    Node* temp=head;
    temp -> next -> prev =NULL;
    head = temp -> next;
    temp -> next = NULL; 
    delete temp;
}

else{

    Node* prev=NULL;
    Node* curr=head; 
    int cnt=1;
    while(cnt < pos){
        prev=curr;
        curr = curr->next;
        cnt++;
    }

    if(curr->next == NULL){
        tail = prev;
    }

    curr->prev = NULL;
    prev->next = curr->next;
    curr->next = NULL;

    delete curr;
}
    
}


int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    print(head);
  
    
    insertAtHead(head,tail,10);  
    print(head); 
  
    insertAtTail(tail,head,20);
    print(head);

    insertAtTail(tail,head,30);
    print(head);

    insertAtPosition(head,tail,4,40);
    print(head);


    insertAtTail(tail,head,50);
    print(head);

    insertAtTail(tail,head,60);
    print(head);
    cout<<" head "<< head -> data <<endl;
    cout<<" tail "<< tail -> data <<endl;

    deleteNode(1,head,tail);
    print(head);
    cout<<" head "<< head -> data <<endl;
    cout<<" tail "<< tail -> data <<endl;

    deleteNode(5,head,tail);
    print(head);
    cout<<" head "<< head -> data <<endl;
    cout<<" tail "<< tail -> data <<endl;

     deleteNode(4,head,tail);
    print(head);
    cout<<" head "<< head -> data <<endl;
    cout<<" tail "<< tail -> data <<endl;

    return 0;
}