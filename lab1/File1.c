#pragma hdrstop
#pragma argsused

#include <stdio.h>

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

int _tmain(int argc, _TCHAR* argv[]) 
{ int x = 1, y = 1, z = 1, i = 2, n;
  printf("Enter n:");
  scanf("%d",&n);
  while (i < n)
  {
   z = x + y; x = y; y = z;
   i++;
  }
   printf("Result:");
   printf("%d\n",z);
   system("pause");
	return 0;
}
