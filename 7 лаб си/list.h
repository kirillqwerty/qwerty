//---------------------------------------------------------------------------

#ifndef listH
#define listH
//---------------------------------------------------------------------------
#endif
#include <stdlib.h>
#include <iostream>
#include <string>

struct Node
 {
	 std :: string x;
	 Node *Next, *Prev;
 };

 class List
 {
	 Node *Head, *Tail;
 	public:
	 List():Head(NULL),Tail(NULL){};
	 void Show();
	 void Add(std :: string x);
 };

