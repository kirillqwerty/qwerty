//---------------------------------------------------------------------------

#pragma hdrstop

#include "list.h"
#include <string>
#include <iostream>
//---------------------------------------------------------------------------
#pragma package(smart_init)
void List::Add(std :: string x)
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

 void List::Show()
 {
	 Node *temp = Head;
	 while (temp != NULL)
	 {
		 std :: cout << temp->x << "\n";
		 temp = temp->Next;
	 }
 }

