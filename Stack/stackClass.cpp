#include <iostream>

using namespace std; // Use the std namespace

class Stack {
private:
    int* stck;
    int capacity, front;

public:
    // Constructor to initialize the stack
    Stack(int capacity) {
        stck = new int[capacity];
        this->capacity = capacity;
        front = -1;
    }

    // Destructor to free dynamically allocated memory
    ~Stack() {
        delete[] stck;
    }

    void push(int num) {
        // Check if the stack is full before pushing
        if (isFull()) {
            cout << "Stack is full. Cannot push." << endl;
            return;
        }
        stck[++front] = num;
    }

    int pop() {
        // Check if the stack is empty before popping
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop." << endl;
            return -1; // Return a sentinel value to indicate error
        }
        return stck[front--];
    }

    int top() {
        // Check if the stack is empty before returning the top element
        if (isEmpty()) {
            cout << "Stack is empty. No top element." << endl;
            return -1; // Return a sentinel value to indicate error
        }
        return stck[front];
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return front == capacity - 1;
    }
};
Node* findMiddle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}
int main() {
    // Create a stack with a capacity of 5
    Stack myStack(5);

    // Push some elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Print the top element
    int topElement = myStack.top();
    if (topElement != -1) {
        cout << "Top element: " << topElement << endl;
    }

    // Pop elements from the stack
    while (!myStack.isEmpty()) {
        int poppedElement = myStack.pop();
        cout << "Popped element: " << poppedElement << endl;
    }

    // Try to pop from an empty stack
    int poppedElement2 = myStack.pop();
    if (poppedElement2 == -1) {
        cout << "Tried to pop from an empty stack. Returned sentinel value -1." << endl;
    }

    return 0;
}
