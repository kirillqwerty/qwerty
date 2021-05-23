//---------------------------------------------------------------------------

#ifndef stackH
#define stackH
//---------------------------------------------------------------------------
#endif
class Stack
{
	int top;

	public:
	int a[100]; // Maximum size of Stack

	Stack()
	{top = -1;}

	void push(int x);
	int pop();
	int peek();
    bool empty();
};

