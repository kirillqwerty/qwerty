//---------------------------------------------------------------------------

#ifndef listH
#define listH
//---------------------------------------------------------------------------
#endif
struct Node
 {
	 int x;
	 Node *Next, *Prev;
 };

 class List
 {
	 Node *Head, *Tail;
 public:
	 List():Head(NULL),Tail(NULL){};
	 void Add(int x);
	 int Element(int n);
 };