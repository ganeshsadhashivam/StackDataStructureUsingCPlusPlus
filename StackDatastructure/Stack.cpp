#include<iostream>
#include<string>

using namespace std;

class Stack {
private:
	int top;
	int arr[5];


public:
	Stack() {
		top = -1;
		for (int i = 0; i < 5; i++) {
			arr[i] = 0;
		}
	   }

		bool isEmpty() {
			if (top == -1)
				return true;
			else
				return false;
		}

		bool isFull() {
			if (top == 4)
				return true;
			else
				return false;
		}

		void push(int val) {
			if (isFull()) {
				cout << "Stack is full" << endl;
			}
			else {
				top++; // 0
				arr[top] = val;

			}
		}

		int pop() {
			if (isEmpty()) {
				cout << "Stack is UnderFlow" << endl;
				return 0;
			}
			else {
				int popValue = arr[top];
				arr[top] = 0;
				top--;
				return popValue;
			}
		}

		int count() {
			return(top + 1);
		}


		int peek(int pos) {

			if (isEmpty()) {
				cout << "Stack is UnderFlow" << endl;
				return 0;
			}
			else {
				return arr[pos];
			}

		}


		void change(int pos, int val) {
			arr[pos] = val;
			cout << "value changed at Location" << pos << endl;
		}


		void display() {
			for (int i = 4; i >= 0; i--) {
				cout << arr[i] << endl;
			}
		}
	

};

int main() {
	Stack s1;
	int option, position, value;

	do {
		
		cout << "What operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
		cout << "1. Push()" << endl;
		cout << "2. Pop()" << endl;
		cout << "3. is Empty()" << endl;
		cout << "4. isFull()" << endl;
		cout << "5. peek ()" << endl;
		cout << "6. count()" << endl;
		cout << "7. change()" << endl;
		cout << "8. display()" << endl;
		cout << "9. Clear Screen" << endl << endl;

		cin >> option;
		switch (option) {

		case 1:
			cout << "Enter an item to push in the stack" << endl;
			cin >> value;
			s1.push(value);
			break;

		case 2:
			cout << "Pop Function called poped Value: " << s1.pop() << endl;
			break;

		case 3:
			if (s1.isEmpty())
				cout << "Stack is empty" << endl;
			else
				cout << "Stack is not empty" << endl;
			break;

		case 4:
			if (s1.isFull())
				cout << "Stack is Full" << endl;
			else
				cout << "Stack is not full" << endl;
			break;
		case 5:
			cout << "Enter the position of item you want to peek: " << endl;

			cin >> position;

			cout << "Peek Function is called - value at position " << position << "is " << s1.peek(position) << endl;
			break;

		case 6:
			cout << "Cout function called - Number of items in the stack are: " << s1.count() << endl;
			break;

		case 7:
			cout << "Change Function called - ";
			cout << "Enter position of item you want to change : ";
			cin >> position;
			cout << endl;
			cout << "Enter the value of item you want to change : ";
			cin >> value;
			s1.change(position, value);
			break;

		case 8:
			cout << "Display Function called - " << endl;
			s1.display();
			break;
		case 9:
			system("cls");
			break;

		default:
			cout << "Enter Proper Option Number " << endl;

		}

	} while (option != 0);


	return 0;
}