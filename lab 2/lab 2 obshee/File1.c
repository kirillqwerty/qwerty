#pragma hdrstop
#pragma argsused

#include <stdio.h>

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <windows.h>
#include <cmath>
#include <conio.h>

int fact(int n)
{
 if (n < 0){
  return 0;
 }

 if (n == 0) {
  return 1;
 }

 else{
  return n * fact(n - 1);
 }
}

int _tmain()
{
 system("chcp 1251 > nul");

 int n, minus = 0;
 double x, result = 0, b, error;

 printf("������� �����������: ");
 scanf("%lf", &error);
 while (error > 0.1)
 {
   if (error > 0.1) {
	system("cls");
	printf("������� ������� �������� �����������, ����� ���������� �������� ");
	printf("\n������� �����������: ");
	scanf("%lf", &error);
   }
 }

 system("cls");
 char answer = '�';


 while (answer == '�' || answer == '�' || answer == 'L' || answer == 'l')
 {
   system("cls");
   printf("������� �������� ���� � (� ��������): ");
   scanf("%lf", &x);

   b = sin(x * 0.01745333);

   while (x > 180)
   {
	x = x - 180;
	minus++;
   }

   result = 0;

   if (b < 0) {
	 b = b * (-1.0);
   }

   for (n = 1; fabs(b - result) > error && n < 18; n++)
   {
	 result += (pow((-1),(n - 1)) * pow(x * 0.01745,(2 * n - 1))) / fact(2 * n - 1);
   }

   if (minus % 2 != 0) {
	result = result *(-1);
   }

   if (result < 0) {
	b = b * (-1.0);
   }

   minus = 0;

   printf("��������� ���������� sin(x) = %lf", result);
   printf("\n��������� sin(x) = %lf", b);
   printf("\n��� ����������� %.3lf,", error);
   printf(" n = %d", n);


   getch();

   system("cls");

   printf("\n������ �������� �������� �? (��/���)  : ");
   scanf("%s", &answer);
 }

 getch();
 return 0;
}
