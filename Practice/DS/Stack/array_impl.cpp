#include<iostream>
#include<stack>

using namespace std;

class Stack{
    
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){                        
        //check if empty space is present
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop(){                                      
        //check if element is present(if empty top = -1)
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
    }

    int peek(){
        //check if top element is present
        if(top >= 0){
            return arr[top];
        }
        else{
            cout<<"stack is empty";
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else return false;
    }
};

//all operations are in O(1)

int main()
{
    Stack st(5);
    st.push(22);
    st.push(44);
    st.push(66);

    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();

    if(st.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

    return 0;
}