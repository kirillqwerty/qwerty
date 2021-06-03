#include <stdio.h>
#include <windows.h>
#include "list.h"
#include <conio.h>
#include "main.h"

int main()
{
	system("chcp 1251 > NULL");
	List Faculty;
	Faculty.Add("��������� ������������� ��������������");
	Faculty.Add("��������� �������������� ���������� � ����������");
	Faculty.Add("��������� ������������ � �����������");
	Faculty.Add("��������� ������������ ����� � ������");
	Faculty.Add("��������� ����������������");
	Faculty.Add("���������-������������� ���������");
	Faculty.Add("������� ���������");

	List fkp;
	fkp.Add("���������-��������������� ����������� �������������� ����������");
	fkp.Add("�������������� ������� � ���������� (� ����������� ������������ ������������");
	fkp.Add("����������� �����������");
	fkp.Add("������������� � ������������ �������������� ���������������� �������");
	fkp.Add("��������������� ��������� �������");
	fkp.Add("�������������� � ������������ ����������-����������� ����������� �������");
	fkp.Add("����������� ������� ������������");
	fkp.Add("�������������� ������� � ���������� (� ������-�����������)");

	List fitu;
	fitu.Add("������������������ ������� ��������� ����������");
	fitu.Add("�������������� ���������� � ���������� � ����������� ��������");
	fitu.Add("������������� ���������");
	fitu.Add("������������ �����������");
	fitu.Add("�������������� ������� � ���������� (� ������� ���������)");

	List fre;
	fre.Add("��������� �������������� �������");
	fre.Add("�����- � ��������������� ���������� � �������");
	fre.Add("�������������� � ������������� � �����������");
	fre.Add("����������������");
	fre.Add("������������ (��������������� ���������������� ��������)");
	fre.Add("���������������� �������");
	fre.Add("���������������� ������ ����������");
	fre.Add("����������� � �������������-����������� ������� ���������� ���������");
	fre.Add("���������������� �������� (�����������)");

	List fksis;
	fksis.Add("�������������� ������, ������� � ����");
	fksis.Add("����������� � ���������� ����������������");
	fksis.Add("����������� ����������� �������������� ����������");
	fksis.Add("����������� �������������� ��������");

	List fi;
	fi.Add("������ ���������� � �����������������");
	fi.Add("�������������������� ������� (��������������, ������������ � �������� ����������)");
	fi.Add("�������������������� ���������� (���� ����������������)");
	fi.Add("�������������������� ���������� (������� ������������� �������������� ����������)");
	fi.Add("�������������������� ���������� (������� ����������������)");
	fi.Add("�������������������� ���������� (�������� ����- � ������������)");

	List ief;
	ief.Add("�������������� ������� � ���������� (� ���������)");
	ief.Add("�������������� ������� � ���������� (� ���������)");
	ief.Add("��������� ������������ �������");
	ief.Add("����������� ���������");

	List vf;
	vf.Add("�������������������� ����������");
	vf.Add("������������");
	vf.Add("�������������� ������, ������� � ����");
	vf.Add("�������������������� ������� (��������������, ������������ � �������� ����������)");

	int count = 0;
	abiturient *stud = new abiturient [100];
	start:Menu();

	char key = getch();

	switch (key)
	{
		case '1':
		system("cls");
		Faculty.Show();
		break;

		case '2':
		system("cls");
		ShowAbitInfo(count, stud);
		getch();
		goto start;
		break;

		case '3':
		system("cls");
		ShowAbit(count, stud);
		getch();
		goto start;
		break;

		case '4':
		system("cls");
		std :: cout << "��������� ������������� ��������������\n\n";
		fkp.Show();
		std :: cout <<"\n\n";

		std :: cout << "��������� �������������� ���������� � ����������\n\n";
		fitu.Show();
		std :: cout << "\n\n";

		std :: cout << "��������� ������������ � �����������\n\n";
		fre.Show();
		std :: cout <<"\n\n";

		std :: cout << "��������� ������������ ����� � ������\n\n";
		fksis.Show();
		std :: cout <<"\n\n";

		std :: cout << "��������� ����������������\n\n";
		fi.Show();
		std :: cout <<"\n\n";

		std :: cout << "���������-������������� ���������\n\n";
		ief.Show();
		std :: cout <<"\n\n";

		std :: cout << "������� ���������\n\n";
		vf.Show();
		std :: cout <<"\n\n";
        getch();
		goto start;
		break;

		case '5':
		return 0;
	}

	repeat1:
	char fac = getch();
	switch (fac)
	{
		case '1':
		system("cls");
		fkp.Show();
		break;

		case '2':
		system("cls");
		fitu.Show();
		break;

		case '3':
		system("cls");
		fre.Show();
		break;

		case '4':
		system("cls");
		fksis.Show();
		break;

		case '5':
		system("cls");
		fi.Show();
		break;

		case '6':
		system("cls");
		ief.Show();
		break;

		case '7':
		system("cls");
		vf.Show();
		break;

		default:
		goto repeat1;
	}

	char spec = getch();
	if (fac == '6')
	{
		if (spec == '3' || spec == '4')
		{
			EnterInfo(count, stud, false, true, true);
		}
	}
	else
	{
		EnterInfo(count, stud, true, false, true);
	}
	system("cls");
	count++;
	goto start;
}

void Menu()
{
	system("cls");
	std :: cout << "1) ������ ���������\n2) ���������� �� ������������(������ ��� �������������) \n3) ���������� �� ������������\n4) ���������� � ����������� � ��������������\n5) �����";
}

void EnterInfo(int c, abiturient x[c], bool Physics, bool Eng, bool Rus)
{
	system("cls");
	std :: cout << "������� ���: ";
	std :: cin >> x[c].name;

	system("cls");
	std :: cout << "�������  ����� ��������: ";
	std :: cin >> x[c].PassportNumber;

	system("cls");
	std :: cout << "������� �������� �����: ";
	std :: cin >> x[c].HomeAddress;

	system("cls");
	std :: cout << "������� �� � ������� � ������� �� �����������: ";
	std :: cin >> x[c].School;

    system("cls");
	std :: cout << "������� ������� ���� ���������: ";
	std :: cin >> x[c].AverageMark;

	while (x[c].AverageMark < 0 || x[c].AverageMark > 10)
	{
		system("cls");
		std :: cout << "��������� ����\n";
		std :: cout << "������� ������� ���� ���������: ";
		std :: cin >> x[c].AverageMark;
	}

	system("cls");
	std :: cout << "������� ��������� �� �� ����������: ";
	std :: cin >> x[c].MathMark;

	while (x[c].MathMark < 0 || x[c].MathMark > 100)
	{
		system("cls");
		std :: cout << "��������� ����\n";
		std :: cout << "������� ��������� �� �� ����������: ";
		std :: cin >> x[c].MathMark;
	}

	if (Physics == true)
	{
		system("cls");
		std :: cout << "������� ��������� �� �� ������: ";
		std :: cin >> x[c].PhysicsMark;

		while (x[c].PhysicsMark < 0 || x[c].PhysicsMark > 100)
		{
			system("cls");
			std :: cout << "��������� ����\n";
			std :: cout << "������� ��������� �� �� ������: ";
			std :: cin >> x[c].PhysicsMark;
		}
	}

	if (Rus == true)
	{
		system("cls");
		std :: cout << "������� ��������� �� �� �������� �����: ";
		std :: cin >> x[c].RussianLangMark;

		while (x[c].RussianLangMark < 0 || x[c].RussianLangMark > 100)
		{
			system("cls");
			std :: cout << "��������� ����\n";
			std :: cout << "������� ��������� �� �� �������� �����: ";
			std :: cin >> x[c].RussianLangMark;
		}
	}

	if (Eng == true)
	{
		system("cls");
		std :: cout << "������� ��������� �� �� ����������� �����: ";
		std :: cin >> x[c].EngLangMark;

		while (x[c].EngLangMark < 0 || x[c].EngLangMark > 100)
		{
			system("cls");
			std :: cout << "��������� ����\n";
			std :: cout << "������� ��������� �� �� ����������� �����: ";
			std :: cin >> x[c].EngLangMark;
		}
	}
}

void ShowAbitInfo(int c, abiturient x[c])
{
	std :: cout << "���������� �� ������������(������ ��� �������������)\n";
	for (int i = 0; i < c; i++)
	{

		std :: cout << "\n\n��� - " << x[i].name;
		std :: cout << "\n����� �������� - " << x[i].PassportNumber;
		std :: cout << "\n����� ���������� - " << x[i].HomeAddress;
		std :: cout << "\n�� �� ����������� - " << x[i].School;
		std :: cout << "\nC������ ���� ��������� - " << x[i].AverageMark;
		std :: cout << "\n��������� �� �� ���������� - " << x[i].MathMark;
		if (x[i].PhysicsMark != 0)
		{
			std :: cout << "\n��������� �� �� ������ - " << x[i].PhysicsMark;
		}
		std :: cout << "\n��������� �� �� �������� ����� - " << x[i].RussianLangMark;
		if (x[i].EngLangMark != 0)
		{
			std :: cout << "\n��������� �� �� ����������� ����� - " << x[i].EngLangMark;
		}
		if (x[i].EngLangMark == 0)
		{
			std :: cout << "\n����� ������ - " << x[i].AverageMark * 10 + x[i].MathMark + x[i].PhysicsMark + x[i].RussianLangMark;
		}
		else
		{
			std :: cout << "\n����� ������ - " << x[i].AverageMark * 10 + x[i].MathMark + x[i].EngLangMark + x[i].RussianLangMark;
		}
	}
}

void ShowAbit(int c, abiturient x[c])
{
	std :: cout << "���������� �� ������������  \n";
	for (int i = 0; i < c; i++)
	{
		std :: cout << "\n\n��� - " << x[i].name;
        if (x[i].EngLangMark == 0)
		{
			std :: cout << "\n����� ������ - " << points( x[i].MathMark, x[i].PhysicsMark, x[i].RussianLangMark, x[i].AverageMark);
		}
		else
		{
			std :: cout << "\n����� ������ - " << points( x[i].MathMark, x[i].EngLangMark, x[i].RussianLangMark, x[i].AverageMark);
		}
	}
}

int points(int m, int p, int r, float aver)
{
	return aver * 10 + m + p + r;
}
