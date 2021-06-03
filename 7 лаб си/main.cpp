#include <stdio.h>
#include <windows.h>
#include "list.h"
#include <conio.h>
#include "main.h"

int main()
{
	system("chcp 1251 > NULL");
	List Faculty;
	Faculty.Add("Факультет компьютерного проектирования");
	Faculty.Add("Факультет информационных технологий и управления");
	Faculty.Add("Факультет радиотехники и электроники");
	Faculty.Add("Факультет компьютерных сетей и систем");
	Faculty.Add("Факультет инфокоммуникаций");
	Faculty.Add("Инженерно-экономический факультет");
	Faculty.Add("Военный факультет");

	List fkp;
	fkp.Add("Инженерно-психологическое обеспечение информационных технологий");
	fkp.Add("Информационные системы и технологии (в обеспечении промышленной безопасности");
	fkp.Add("Медицинская электроника");
	fkp.Add("Моделирование и компьютерное проектирование радиоэлектронных средств");
	fkp.Add("Программируемые мобильные системы");
	fkp.Add("Проектирование и производство программно-управляемых электронных средств");
	fkp.Add("Электронные системы безопасности");
	fkp.Add("Информационные системы и технологии (в бизнес-менеджменте)");

	List fitu;
	fitu.Add("Автоматизированные системы обработки информации");
	fitu.Add("Информационные технологии и управление в технических системах");
	fitu.Add("Искусственный интеллект");
	fitu.Add("Промышленная электроника");
	fitu.Add("Информационные системы и технологии (в игровой индустрии)");

	List fre;
	fre.Add("Квантовые информационные системы");
	fre.Add("Микро- и наноэлектронные технологии и системы");
	fre.Add("Нанотехнологии и наноматериалы в электронике");
	fre.Add("Радиоинформатика");
	fre.Add("Радиотехника (Программируемые радиоэлектронные средства)");
	fre.Add("Радиоэлектронные системы");
	fre.Add("Радиоэлектронная защита информации");
	fre.Add("Электронные и информационно-управляющие системы физических установок");
	fre.Add("Профессиональное обучение (информатика)");

	List fksis;
	fksis.Add("Вычислительные машины, системы и сети");
	fksis.Add("Информатика и технологии программирования");
	fksis.Add("Программное обеспечение информационных технологий");
	fksis.Add("Электронные вычислительные средства");

	List fi;
	fi.Add("Защита информации в телекоммуникациях");
	fi.Add("Инфокоммуникационные системы (стандартизация, сертификация и контроль параметров)");
	fi.Add("Инфокоммуникационные технологии (сети инфокоммуникаций)");
	fi.Add("Инфокоммуникационные технологии (системы распределения мультимедийной информации)");
	fi.Add("Инфокоммуникационные технологии (системы телекоммуникаций)");
	fi.Add("Инфокоммуникационные технологии (цифровое теле- и радиовещание)");

	List ief;
	ief.Add("Информационные системы и технологии (в логистике)");
	ief.Add("Информационные системы и технологии (в экономике)");
	ief.Add("Экономика электронного бизнеса");
	ief.Add("Электронный маркетинг");

	List vf;
	vf.Add("Инфокоммуникационные технологии");
	vf.Add("Радиотехника");
	vf.Add("Вычислительные машины, системы и сети");
	vf.Add("Инфокоммуникационные системы (стандартизация, сертификация и контроль параметров)");

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
		std :: cout << "Факультет компьютерного проектирования\n\n";
		fkp.Show();
		std :: cout <<"\n\n";

		std :: cout << "Факультет информационных технологий и управления\n\n";
		fitu.Show();
		std :: cout << "\n\n";

		std :: cout << "Факультет радиотехники и электроники\n\n";
		fre.Show();
		std :: cout <<"\n\n";

		std :: cout << "Факультет компьютерных сетей и систем\n\n";
		fksis.Show();
		std :: cout <<"\n\n";

		std :: cout << "Факультет инфокоммуникаций\n\n";
		fi.Show();
		std :: cout <<"\n\n";

		std :: cout << "Инженерно-экономический факультет\n\n";
		ief.Show();
		std :: cout <<"\n\n";

		std :: cout << "Военный факультет\n\n";
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
	std :: cout << "1) Подать заявление\n2) Информация об абитуриентах(только для администрации) \n3) Информация об абитуриентах\n4) Информация о факультетах и специальностях\n5) Выход";
}

void EnterInfo(int c, abiturient x[c], bool Physics, bool Eng, bool Rus)
{
	system("cls");
	std :: cout << "Введите ФИО: ";
	std :: cin >> x[c].name;

	system("cls");
	std :: cout << "Введите  номер паспорта: ";
	std :: cin >> x[c].PassportNumber;

	system("cls");
	std :: cout << "Введите домашний адрес: ";
	std :: cin >> x[c].HomeAddress;

	system("cls");
	std :: cout << "Введите УО в котором в учились до поступления: ";
	std :: cin >> x[c].School;

    system("cls");
	std :: cout << "Введите средний балл аттестата: ";
	std :: cin >> x[c].AverageMark;

	while (x[c].AverageMark < 0 || x[c].AverageMark > 10)
	{
		system("cls");
		std :: cout << "Повторите ввод\n";
		std :: cout << "Введите средний балл аттестата: ";
		std :: cin >> x[c].AverageMark;
	}

	system("cls");
	std :: cout << "Введите результат ЦТ по математике: ";
	std :: cin >> x[c].MathMark;

	while (x[c].MathMark < 0 || x[c].MathMark > 100)
	{
		system("cls");
		std :: cout << "Повторите ввод\n";
		std :: cout << "Введите результат ЦТ по математике: ";
		std :: cin >> x[c].MathMark;
	}

	if (Physics == true)
	{
		system("cls");
		std :: cout << "Введите результат ЦТ по физике: ";
		std :: cin >> x[c].PhysicsMark;

		while (x[c].PhysicsMark < 0 || x[c].PhysicsMark > 100)
		{
			system("cls");
			std :: cout << "Повторите ввод\n";
			std :: cout << "Введите результат ЦТ по физике: ";
			std :: cin >> x[c].PhysicsMark;
		}
	}

	if (Rus == true)
	{
		system("cls");
		std :: cout << "Введите результат ЦТ по русскому языку: ";
		std :: cin >> x[c].RussianLangMark;

		while (x[c].RussianLangMark < 0 || x[c].RussianLangMark > 100)
		{
			system("cls");
			std :: cout << "Повторите ввод\n";
			std :: cout << "Введите результат ЦТ по русскому языку: ";
			std :: cin >> x[c].RussianLangMark;
		}
	}

	if (Eng == true)
	{
		system("cls");
		std :: cout << "Введите результат ЦТ по английскому языку: ";
		std :: cin >> x[c].EngLangMark;

		while (x[c].EngLangMark < 0 || x[c].EngLangMark > 100)
		{
			system("cls");
			std :: cout << "Повторите ввод\n";
			std :: cout << "Введите результат ЦТ по английскому языку: ";
			std :: cin >> x[c].EngLangMark;
		}
	}
}

void ShowAbitInfo(int c, abiturient x[c])
{
	std :: cout << "Информация об абитуриентах(только для администрации)\n";
	for (int i = 0; i < c; i++)
	{

		std :: cout << "\n\nФИО - " << x[i].name;
		std :: cout << "\nНомер паспорта - " << x[i].PassportNumber;
		std :: cout << "\nАдрес проживания - " << x[i].HomeAddress;
		std :: cout << "\nУО до поступления - " << x[i].School;
		std :: cout << "\nCредний балл аттестата - " << x[i].AverageMark;
		std :: cout << "\nРезультат ЦТ по математике - " << x[i].MathMark;
		if (x[i].PhysicsMark != 0)
		{
			std :: cout << "\nРезультат ЦТ по физике - " << x[i].PhysicsMark;
		}
		std :: cout << "\nРезультат ЦТ по русскому языку - " << x[i].RussianLangMark;
		if (x[i].EngLangMark != 0)
		{
			std :: cout << "\nРезультат ЦТ по английскому языку - " << x[i].EngLangMark;
		}
		if (x[i].EngLangMark == 0)
		{
			std :: cout << "\nВсего баллов - " << x[i].AverageMark * 10 + x[i].MathMark + x[i].PhysicsMark + x[i].RussianLangMark;
		}
		else
		{
			std :: cout << "\nВсего баллов - " << x[i].AverageMark * 10 + x[i].MathMark + x[i].EngLangMark + x[i].RussianLangMark;
		}
	}
}

void ShowAbit(int c, abiturient x[c])
{
	std :: cout << "Информация об абитуриентах  \n";
	for (int i = 0; i < c; i++)
	{
		std :: cout << "\n\nФИО - " << x[i].name;
        if (x[i].EngLangMark == 0)
		{
			std :: cout << "\nВсего баллов - " << points( x[i].MathMark, x[i].PhysicsMark, x[i].RussianLangMark, x[i].AverageMark);
		}
		else
		{
			std :: cout << "\nВсего баллов - " << points( x[i].MathMark, x[i].EngLangMark, x[i].RussianLangMark, x[i].AverageMark);
		}
	}
}

int points(int m, int p, int r, float aver)
{
	return aver * 10 + m + p + r;
}
