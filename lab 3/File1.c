#pragma hdrstop
#pragma argsused

#include <stdio.h>

#ifdef _WIN32
#include <tchar.h>
#include <time.h>
#include <stdlib.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

int _tmain(int argc, _TCHAR* argv[]) 
{
 srand(time(0));
 int xyz[5][5][5];
   //�������� 2d ��������
 int xy[5][5],xz[5][5],yz[5][5];

   for(int x = 0; x < 5; x++)
  {
	for(int y = 0; y < 5; y++)
	{
		for(int z = 0; z < 5; z++)
	  {
		 xyz[x][y][z] = rand() % 2;
	  }
	}
  }

  for (int x = 0; x < 5; x++)
  {
   for (int y = 0; y < 5; y++)
   {
	 xy[x][y] = xyz[x][y][0];
   }
  }

  for (int y = 0; y < 5; y++)
  {
	for (int z = 0; z < 5; z++)
	{
	   yz[y][z] = xyz[0][y][z];
	}
  }

  for (int x = 0; x < 5; x++)
  {
	for (int z = 0; z < 5; z++)
	{
	   xz[x][z] = xyz[x][0][z];
	}
  }
//����� ���� ����� 3d �������
 for(int x = 0; x < 5; x++)
 {
	for(int y = 0; y < 5; y++)
	{
		for(int z = 0; z < 5; z++)
        {
            if(xyz[x][y][z] == 0) continue;
			if(xy[x][y] == 0)
			{
			   xy[x][y] = 1;
			}
			if(xz[x][z] == 0)
			{
			  xz[x][z] = 1;
			}
			if(yz[y][z] == 0)
			{
              yz[y][z] = 1;
			}
	  }
	}
  }

  for (int x = 0; x < 5; x++)
  {
	for (int y = 0; y < 5; y++)
	{
	  printf("%d",xy[x][y]);
	}
	printf("\n");
  }

  for (int y = 0; y < 5; y++)
  {
	for (int z = 0; z < 5; z++)
	{
	 printf("%d",yz[y][z]);
	}
	printf("\n");
  }

  for (int x = 0; x < 5; x++)
  {
	for (int z = 0; z < 5; z++)
	{
	 printf("%d",xz[x][z]);
	}
	printf("\n");
  }
   system("pause");
	return 0;
}
