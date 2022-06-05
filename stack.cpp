//HaekalNajibAli
//G1A021052
//InformatikaB

#include <iostream>
#define MAX 10
using namespace std;

struct Stack {
    int top; 
	int data[MAX];
} S;

void init() {
    S.top = -1;
}
 
bool isEmpty() {
    return S.top == -1;
}
 
bool isFull() {
    return S.top == MAX -1;
}
 
void push() {
    if (isFull()) {
        cout << "\nMaximum Stack" << endl;
    } else {
        S.top++;
        cout << "\nInput data : ";
        cin >> S.data[S.top];
        cout << "\n Data : '" << S.data[S.top] <<endl; 
		cout << "Data Is Added"<< endl;
    }
}
 
void pop() {
    if (isEmpty()) {
        cout << "\nStack Is Empty !! " << endl;
    } else {
        cout << "\n Data :"<<S.data[S.top] <<endl;
        cout << "Data Is Deleted" << endl;
        S.top--;
    }
}
 
void printStack() {
    if (isEmpty()) {
        cout<< "\nStack Is Empty\n";
    } else {
        cout << "Stack Data : ";
        for (int i = S.top; i >= 0; i--)
            cout << S.data[i] <<  ( ",");
    }
}

int main() {
	int choose;
	do
	{
		cout << "--------------STACK-------------\n"
			<< " 1. Add Data\n"
			<< " 2. Deleted Data \n"
			<< " 3. Show Data \n"
			<< " 4. EXIT \n\n"
			<< "----------------------------------\n"
			<< "Insert Option : "; cin >> choose;
		switch (choose)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			printStack();
			break;
		default:
			cout << "Option Is Not Available";
			break;
		}
	} while (choose !=3);
	return 0;
}