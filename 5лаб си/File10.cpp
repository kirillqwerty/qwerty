#include <iostream>
#include <new>
#include <ctime>
#include <windows.h>
#include <conio.h>

using namespace std;

template <typename T>
class Queue
{
private:
  T* p;
  int count;

public:

  Queue()
  {
	count = 0;
  }

  Queue(const Queue& obj)
  {
	count = obj.count;

	try
	{
	  p = new T[count];

	  for (int i = 0; i < count; i++)
		p[i] = obj.p[i];
	}
	catch (bad_alloc e)
	{
	  cout << e.what() << endl;
	  count = 0;
	}
  }

  void push(T item)
  {
	T* p2;
	p2 = p;

	try
	{
	  p = new T[count + 1];

	  for (int i = 0; i < count; i++)
		p[i] = p2[i];

	  p[count] = item;
	  count++;

	  if (count > 1)
		delete[] p2;
	}
	catch (bad_alloc e)
	{
	  cout << e.what() << endl;
	  p = p2;
	}
  }

  T pop()
  {
	if (count == 0)
	  return 0;

	T item;
	item = p[0];

	try
	{
	  T* p2;
	  p2 = new T[count - 1];
	  count--;

	  for (int i = 0; i < count; i++)
		p2[i] = p[i + 1];

	  if (count > 0)
		delete[] p;

	  p = p2;
	  return item;
	}
	catch (bad_alloc e)
	{
	  cout << e.what() << endl;
	  return 0;
	}
  }

  Queue& operator=(const Queue& obj)
  {
	T* p2;

	try
	{
	  p2 = new T[obj.count];

	  if (count > 0)
		delete[] p;

	  p = p2;
	  count = obj.count;

	  for (int i = 0; i < count; i++)
		p[i] = obj.p[i];
	}
	catch (bad_alloc e)
	{

	  cout << e.what() << endl;
	}
	return *this;
  }

  ~Queue()
  {
	if (count > 0)
	  delete[] p;
  }

  int GetN()
  {
	return count;
  }


  void print(const char* objName)
  {
	cout << objName << ": ";
	for (int i = 0; i < count; i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;
  }

  T GetItem()
  {
	if (count > 0)
	  return p[0];
	else
	  return 0;
  }

};
// Find min element 
int GetMin(int a, int b, int c, int d, int e)
{
	if (a <= b && a <= c && a <= d && a <= e)
	{
		return 1;
	}
	else if (b <= a && b <= c && b <= d && b <= e)
	{
		return 2;
	}
	else if (c <= b && c <= a && c <= d && c <= e)
	{
		return 3;
	}
	else if (d <= b && d <= c && d <= a && d <= e)
	{
		return 4;
	}
	else if (e <= b && e <= c && e <= a && e <= d)
	{
		return 5;
	}
	else
	return 0;
}

float Time, TotalTime = 0;
// time counter + clean console
void timer()
{
	Sleep(Time = rand() % 1000 + 1);
	TotalTime += Time;
	system("cls");
}

Queue<int> cab1 , cab2, cab3, cab4, cab5;

int a,b,c,d,e;

void TakePlace()
{
	if (a != 100) {
	 a = cab1.GetN();
	}

	if (b != 100) {
	 b = cab2.GetN();
	}

	if (c != 100) {
	 c = cab3.GetN();
	}

	if (d != 100) {
	 d = cab4.GetN();
	}

	if (e != 100) {
	 e = cab5.GetN();
	}

	switch (GetMin(a, b, c, d, e))
	{
		case 1:
		cab1.push(1);
		a = 100;
		break;

		case 2:
		cab2.push(1);
		b = 100;
		break;

		case 3:
		cab3.push(1);
		c = 100;
		break;

		case 4:
		cab4.push(1);
		d = 100;
		break;

		case 5:
		cab5.push(1);
		e = 100;
		break;
	}
}

void display()
{
	cab1.print("Cab1");
	cab2.print("Cab2");
	cab3.print("Cab3");
	cab4.print("Cab4");
	cab5.print("Cab5");
	cout << "\nTime:" << TotalTime/1000 << "sec";
}

int main()
{
  srand(time(NULL));
  // random queue push
  for (int i = 0; i < 20; i++)
  {
	switch (rand() % 5)
	{
	 case 0:
	 cab1.push(0);
	 break;

	 case 1:
	 cab2.push(0);
	 break;

	 case 2:
	 cab3.push(0);
	 break;

	 case 3:
	 cab4.push(0);
	 break;

	 case 4:
	 cab5.push(0);
	 break;
	}
  }
 //--------------------------------------------------
 display();
 cout << "\n" << "1 entering";
 TakePlace();
 Sleep(2000);
 system("cls");

 // random queue push and pop
  for (int stop = 0; stop < 5;)
  {
	 if (cab1.GetItem() == 1)
	 {
		display();
		cab1.pop();
		TakePlace();
		stop++;
	 }

	 else if (cab2.GetItem() == 1)
	  {
		display();
		cab2.pop();
		TakePlace();
		stop++;
	 }

	 else if (cab3.GetItem() == 1)
	 {
		display();
		cab3.pop();
		TakePlace();
		stop++;
	 }

	 else if (cab4.GetItem() == 1)
	 {
		display();
		cab4.pop();
		TakePlace();
		stop++;
	 }

	 else if (cab5.GetItem() == 1)
	 {
		display();
		cab5.pop();
		TakePlace();
		stop++;
	 }

	 else
	 display();

	  switch (rand() % 10)
	  {
		case 0:
		cab1.push(0);
		break;

		case 1:
		cab1.pop();
		break;

		case 2:
		cab2.push(0);
		break;

		case 3:
		cab2.pop();
		break;

		case 4:
		cab3.push(0);
		break;

		case 5:
		cab3.pop();
		break;

		case 6:
		cab4.push(0);
		break;

		case 7:
		cab4.pop();
		break;

		case 8:
		cab5.push(0);
		break;

		case 9:
		cab5.pop();
		break;
	  }
	 timer();
  }//--------------------------------------------------

  cout << "All cabs are passed\nTotalTime:" << TotalTime/1000 << "sec";
  getch();
  return 0;
}

