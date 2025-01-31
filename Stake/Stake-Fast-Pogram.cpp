#include <iostream>
using namespace std;

class Stack {
private:
    int *arr;
    int top;
    int capacity;

public:
    
        Stack(int size) {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

   
    ~Stack() {
        delete[] arr;
    }

  
    void Push(int value) {
        if (isFull()) {
            cout << "Stack is full!" << endl;
        } else {
            arr[++top] = value;
            cout << value << " pushed to stack." << endl;
        }
    }

   
    void Pop() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << arr[top--] << " popped from stack." << endl;
        }
    }

    
    int Peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;  
        }
        return arr[top];
    }

    
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    
    bool isEmpty() {
        return top == -1;
    }

    
    bool isFull() {
        return top == capacity - 1;
    }

    
    int size() {
        return top + 1;
    }
};

int main() {
    int stackSize, value;

   
    cout << "Enter the size of the stack: ";
    cin >> stackSize;

   
    Stack s(stackSize);

    // Push elements onto the stack
    cout << "Enter " << stackSize << " elements to push to the stack:\n" << endl;
    cout << "-------------------"<< endl;
    for (int i = 0; i < stackSize; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> value;
        s.Push(value);
        cout << "-------------------"<< endl;
    }

    // Show the top element
    cout << "Top element is: " << s.Peek() << endl;
    cout << "-------------------"<< endl;

    // Display all elements
    s.display();
     cout << "-------------------"<< endl;

    // Pop a few elements
    s.Pop();
    s.Pop();
    cout << "-------------------"<< endl;

    // Show the top element after popping
    cout << "Top element is: " << s.Peek() << endl;
    cout << "-------------------"<< endl;

    // Display the remaining stack
    s.display();
     cout << "-------------------"<< endl;

    // Show the current size of the stack
    cout << "Stack size:" << s.size() << endl;
    cout << "********************************************************"<< endl;
    return 0;
}