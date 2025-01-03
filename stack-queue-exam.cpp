#include<iostream>
using namespace std;

class Stack {
    private:
        int *arr;
        int top;
        int capacity;
        int count;
    public:
        Stack(int size){
            this->arr = new int[size];
            this->capacity = size;
            this->top = -1;
            this->count = 0;
        }

        ~Stack(){
            delete[] arr;
        }

        void push(int);
        void pop();
        void gettop();
        void display();
        void isEmpty();
        void isFull();

};

void Stack::push(int data){
    if(this->top == capacity - 1){
        cout << "Stack is overflow...." << endl;
        return;
    }

    this->top++;
    this->arr[top] = data;
    this->count++;

    cout << "Element pushed successfully...." << endl;

}
void Stack::pop(){
    if(this->top == -1){
        cout << "Stack is underflow..." << endl;
        return;
    }

    this->top--;
    this->count--;

    cout << "Element poped successfully...." << endl;

}
void Stack::gettop(){
    if(this->top == -1){
        cout << "Stack is underflow..." << endl;
        return;
    }

    cout << "Top Element is : " << this->top[arr];
}
void Stack::display(){
    if(this->top == -1){
        cout << "Stack is underflow..." << endl;
        return;
    }

    for(int i=this->top; i>=0; i--){
        cout << this->arr[i] << " ";
    }
    cout << endl;

}
void Stack::isEmpty(){
    if(this->top == -1){
        cout << "Stack is Empty..." << endl;
        return;
    } else{
        cout << "Stack is not empty..." << endl;
    }
}
void Stack::isFull(){
    if(this->top == capacity - 1){
        cout << "Stack is Full...." << endl;
        return;
    } else{
        cout << "Stack is not full..." << endl;
    }
}


int main (){
    Stack stack(5);
    int choice;

    do{
        cout << "\nEnter 1 to push an element : " << endl ;
        cout << "Enter 2 to pop an element : " << endl;
        cout << "Enter 3 to Display top : " << endl;
        cout << "Enter 4 to Display All : " << endl;
        cout << "Enter 5 to Check ifEmpty : " << endl;
        cout << "Enter 6 to Check ifFull : " << endl;
        cout << "Enter 7 to exit : " << endl;

        cout << "Enter Your choice : ";
        cin >> choice;

        switch(choice){
            case 1 : {
                int data;

                cout << "Enter data : ";
                cin >> data;

                stack.push(data);

                break;
            }

            case 2 : {
                stack.pop();
                break;
            }

            case 3 : {
                stack.gettop();
                break;
            }

            case 4 : {
                stack.display();
                break;
            }

            case 5 : {
                stack.isEmpty();
                break;
            }

            case 6 : {
                stack.isFull();
                break;
            }

            case 7 : {
                cout << "Thank you for visiting..." << endl; 
                break;
            }

            default: {
                cout << "Enter valid choice..." << endl;
            }
        }

    } while(choice != 7);

    return 0;
}