//---------------------------------------------------------------------------

#pragma hdrstop

#include "stack.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
void Stack::push(int x)
{
		a[++top] = x;
}

int Stack::pop()
{
	if (top < 0) {
		return 0;
	}
	else
	{
		int x = a[top--];
		return x;
	}
}
int Stack::peek()
{
	if (top < 0)
	{
		return 0;
	}
	else
	{
		int x = a[top];
		return x;
	}
}

bool Stack::empty()
{
	if (top < 0)
	{
		return true;
	}
	else
	{
        return false;
    }
}


