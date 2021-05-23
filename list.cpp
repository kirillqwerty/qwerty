//---------------------------------------------------------------------------

#pragma hdrstop

#include "list.h"
#include <iostream>
//---------------------------------------------------------------------------
#pragma package(smart_init)

void List::Add(int x)
 {
   Node *temp = new Node;
   temp->Next = NULL;
   temp->x = x;

   if (Head != NULL)
   {
	   temp->Prev = Tail;
	   Tail->Next = temp;
	   Tail = temp;
   }
   else
   {
	   temp->Prev = NULL;
	   Head = Tail = temp;
   }
 }
int List::Element(int x)
 {
	 Node *temp = Head;
	 for (int i = 0; i < x - 1; i++)
	 {
		 temp = temp->Next;
	 }

	return temp->x;
 }

