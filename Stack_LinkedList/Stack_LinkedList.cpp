#include <iostream>
using namespace std;
template< class t >
class stack_LinkedList {
public:
	struct node
	{
		t item;
		node* next;
	};
	node* top;
	stack_LinkedList()
	{
		top = NULL;
	}
	void push(t newElement) 
	{
		node *newItemPointer = new node;
		if (newItemPointer == NULL) { cout << " Error , newItemPointer = null "; }
		else
		{
			newItemPointer->item = newElement;
			newItemPointer->next = top;
			top = newItemPointer;
		}
	}
	bool isEmpty() { return top == NULL; }
	void pop() 
	{
		if (isEmpty()) { cout << " LinkedLIst is Empty "; }
		else 
		{
			node* temp = new node;
			temp = top;
			top = top->next;
			temp = temp->next = NULL;
			delete temp;
		}
	}
	void pop(t &LastStackElement)
	{
		if (isEmpty()) { cout << " LinkedLIst is Empty "; }
		else
		{
			LastStackElement = top->item;
			node* temp = new node;
			temp = top;
			top = top->next;
			temp = temp->next = NULL;
			delete temp;
		}
	}
	void getTop(t &StackTop) 
	{
		if (isEmpty()) { cout << " Stack is Empty , getTop() "; }
		else 
		{
			StackTop = top->item;
		}
	} 

	void display() 
	{
		while (top!=NULL) 
		{
			cout << top->item <<" ";
			top=top->next;
		}

	}
};
int main()
{
	stack_LinkedList<int> OBJ;
	OBJ.push(5);
	OBJ.push(10);
	OBJ.push(15);
	OBJ.push(20);
	OBJ.pop();
	OBJ.display();
    
}

