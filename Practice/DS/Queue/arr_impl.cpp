#include<iostream>
using namespace std;

class queue{

    public:
        int *arr;
        int size;
        int front;
        int rear;

        queue(int n){
            this->size = n;
            arr = new int(size);
            this->front = 0;
            this->rear = 0;
        }

        void push(int data){
            if(rear == size){
                cout<<"queue is full";
            }
            else{
               arr[rear] = data;
               rear++;
            }
        }

        void pop(){
            if(front == rear){            //empty condn
                cout<<"queue is empty";
            }
            else{
                arr[front] = -1;
                front++;
                if(front == rear){     
                    front=0;                 //to use empty space
                    rear=0;
                }
            }
        }

        bool isEmpty(){
            if(front == rear)
                return true;
            else
                return false;
        }

        int Front(){
            if(front == rear)
                return -1;
            else return arr[front];
        }

        void print(){
            for(int i= front;i<size;i++){
                cout<<arr[i]<<" ";
            }
        }
};

int main()
{
    queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.print();
    cout<<endl;

    q.pop();
    q.pop();
    q.pop(); 

    q.print();

    return 0;
}