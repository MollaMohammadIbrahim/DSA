// creating myStack using c++ and array

#include<bits/stdc++.h>

using namespace std;
int MAX_myStack_SIZE = 5;
int front = -1;
int myStack[5];

bool isEmpty(){
    return front == -1;
}
bool isFull(){
    return front == (sizeof(myStack)/sizeof(myStack[0]))-1;
}

void push(int value){
    if(isFull()){
        cout<<" myStack is full!"<<endl;
        return;
    }
    front++;
    myStack[front] = value;
}

int top(){
    if(isEmpty()){
        cout<<" myStack is empty!"<<endl;
        
    }
    else return myStack[front];
}

void pop(){
    if(isEmpty()){
        cout<<" myStack is empty!"<<endl;
        return;
    }
    front--;

}

int main(){
    //cout<<(sizeof(myStack)/sizeof(myStack[0]))<<endl;
    for(int i=1; i<=8 ; i++){
        push(i);
        //cout<<top()<<endl;
        
        
    }
    for(int i=1; i<=8 ; i++){
        cout<<i<<" "<<top()<<endl;
        pop();
    }


}