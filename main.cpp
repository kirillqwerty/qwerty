#include <stdio.h>
#include <iostream>
#include <ctime>
#include "list.h"
#include "tree.h"
#include "stack.h"

int main()
{
	srand(time(NULL));

	int size = 20;
	List lst;
	for (int i = 0; i < size; i++)
	{
		lst.Add(rand() % 10 + 1);
	}

	struct tnode *root = 0;
	for (int i = 0; i < size; i++)
	{
		root = addnode(lst.Element(i), root);
	}

	Stack even, odd;

	for (int i = 0; i < size; i++)
	{
		if (lst.Element(i) % 2 == 0)
		{
			even.push(lst.Element(i));
		}
		else
		{
			odd.push(lst.Element(i));
		}
	}

	std :: cout << "Even numbers: ";
	while (even.empty() == false)
	{
		std :: cout << even.pop() << " ";
	}

	std :: cout << "\nOdd numbers: ";
	while (odd.empty() == false)
	{
		std :: cout << odd.pop() << " ";
	}

    std :: cout << "\n";
	system("pause");
	return 0;
}
