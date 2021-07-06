////16, 4
#include <iostream>
#include<fstream>
# define str_len 256
# define size 100
using namespace std;
void enter_new();
void out();
void del();
void search();
struct teachers
{
	char surname_of_teacher[str_len];
	char exam[str_len];
	unsigned day : 4;
	unsigned month : 4;
	unsigned year : 4;

};
teachers allTeachers[size];
teachers all;
teachers b;
int choice; int current_size = 0;
int l, z, q;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	cout << "Введите:" << endl;
	cout << "1-для ввода записи" << endl;
	cout << "2-для вывода записи" << endl;
	cout << "3-для удаления" << endl;
	cout << "4-для поиска информации" << endl;
	cout << "5-для выхода" << endl;
	cin >> choice;
	do
	{
		switch (choice)
		{
		case 1: enter_new(); break;
		case 2: out(); break;
		case 3: del(); break;
		case 4: search(); break;


		}
	} while (choice != 5);
}
void enter_new()
{
	cout << "Ввод информации" << endl;
	if (current_size < size)
	{
		cout << "Строка номер ";
		cout << current_size + 1;
		cout << endl << "Фамилия преподователя" << endl;
		cin >> allTeachers[current_size].surname_of_teacher;
		cout << "Экзамен" << endl;
		cin >> allTeachers[current_size].exam;
		cout << "Дата" << endl;
		cout << "День";
		cin >> l; b.day = l;
		cout << endl;
		cout << "Месяц";
		cin >> z; b.month = l;
		cout << endl;
		cout << "Год";
		cin >> q; b.year = l;
		current_size++;
	}
	else
		cout << "Введено максимальное кол-во строк";
	cout << "Что дальше?" << endl;
	cin >> choice;
}
void out()
{
	int sw, n;
	cout << "1-вывод 1 строки" << endl;
	cout << "2-вывод всех строк" << endl;
	cin >> sw;
	if (sw == 1)
	{
		cout << "Номер выводимой строки: " << endl; cin >> n; cout << endl;
		cout << "Фамилия преподователя:";
		cout << allTeachers[n - 1].surname_of_teacher;
		cout << endl;
		cout << "Экзамен:";
		cout << allTeachers[n - 1].exam;
		cout << endl;
		cout << "Дата" << endl;
		cout << "День:";
		cout << l;
		cout << endl;
		cout << "Месяц:";
		cout << z;
		cout << endl;
		cout << "Год:";
		cout << q;
		cout << endl;


	}
	if (sw == 2)
	{
		for (int i = 0; i < current_size; i++)
		{

			cout << "Фамилия преподователя:";
			cout << allTeachers[i].surname_of_teacher;
			cout << endl;
			cout << "Экзамен:";
			cout << allTeachers[i].exam;
			cout << endl;
			cout << "Дата" << endl;
			cout << "День:";
			cout << l;
			cout << endl;
			cout << "Месяц:";
			cout << z;
			cout << endl;
			cout << "Год:";
			cout << q;
			cout << endl;


		}
	}
	cout << "Что дальше?" << endl;
	cin >> choice;
}
void del()
{
	int d;
	cout << "\nНомер строки, которую надо удалить (для удаления всех строк нажать 99)" << endl;
	cin >> d;
	if (d != 99)
	{
		for (int de1 = (d - 1); de1 < current_size; de1++)
			allTeachers[de1] = allTeachers[de1 + 1];
		current_size = current_size - 1;
	}
	if (d == 99)
		for (int i = 0; i < size; i++)
			allTeachers[i] = all;
	cout << "Что дальше?" << endl;
	cin >> choice;
}
void search()
{
	int day, month, year;
	cout << "Введите дату" << endl;
	cout << "День:";
	cin >> day;
	cout << endl;
	cout << "Месяц:";
	cin >> month;
	cout << endl;
	cout << "Год:";
	cin >> year;
	cout << endl;
	for (int f = 0; f < current_size; f++)
	{
		if (day == l && month == z && year == q)
		{
			cout << "Фамилия преподователя:";
			cout << allTeachers[f].surname_of_teacher;
			cout << endl;
			cout << "Экзамен";
			cout << allTeachers[f].exam;
			cout << endl;
			cout << "Дата" << endl;
			cout << "День:";
			cout << l;
			cout << endl;
			cout << "Месяц:";
			cout << z;
			cout << endl;
			cout << "Год:";
			cout << q;
			cout << endl;
		}
	}
	cout << "Что дальше?" << endl;
	cin >> choice;
}


//16, 5
//#include <iostream>
//#include<fstream>
//# define size 100
//using namespace std;
//void enter_new();
//void out();
//void search();
//union forstud
//{
//	char str[40];
//	int limb;
//	float nim;
//};
//struct stud
//{
//	forstud name;
//	forstud surname;
//	forstud middleName;
//	forstud enterDate;
//	forstud type;
//	forstud group;
//	forstud faculty;
//	forstud average;
//};
//stud students[size];
//int current_size = 0; int choice;
//int main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	cout << "Введите:" << endl;
//	cout << "1-для ввода записи" << endl;
//	cout << "2-для вывода записи" << endl;
//	cout << "3-для поиска информации" << endl;
//	cout << "4-для выхода" << endl;
//	cin >> choice;
//	do
//	{
//		switch (choice)
//		{
//		case 1: enter_new(); break;
//		case 2: out(); break;
//		case 3: search(); break;
//		}
//	} while (choice != 4);
//}
//void enter_new()
//{
//	cout << "Ввод информации" << endl;
//	if (current_size < size)
//	{
//		cout << "Строка номер ";
//		cout << current_size + 1;
//		cout << endl << "Фамилия" << endl;
//		cin >> students[current_size].surname.str;
//		cout << "Имя" << endl;
//		cin >> students[current_size].name.str;
//		cout << "Отчество" << endl;
//		cin >> students[current_size].middleName.str;
//		cout << "Дата поступления: " << endl;
//		cin >> students[current_size].enterDate.str;
//		cout << "Специальность:" << endl;
//		cin >> students[current_size].type.str;
//		cout << "Группа:" << endl;
//		cin >> students[current_size].group.limb;
//		cout << "Факультет:" << endl;
//		cin >> students[current_size].faculty.str;
//		cout << "Средний балл:" << endl;
//		cin >> students[current_size].average.nim;
//		current_size++;
//
//
//	}
//	else
//		cout << "Введено максимальное кол-во строк";
//	cout << "Что дальше?" << endl;
//	cin >> choice;
//}
//void out()
//{
//	int sw, n;
//	cout << "1-вывод 1 строки" << endl;
//	cout << "2-вывод всех строк" << endl;
//	cin >> sw;
//	if (sw == 1)
//	{
//		cout << "Номер выводимой строки: " << endl;
//		cin >> n;
//		cout << endl;
//		cout << "Фамилия" << endl;
//		cout << students[n - 1].surname.str;
//		cout << "Имя" << endl;
//		cout << students[n - 1].name.str;
//		cout << "Отчество" << endl;
//		cout << students[n - 1].middleName.str;
//		cout << "Дата поступления: " << endl;
//		cout << students[n - 1].enterDate.str;
//		cout << "Специальность:" << endl;
//		cout << students[n - 1].type.str;
//		cout << "Группа:" << endl;
//		cout << students[n - 1].group.limb;
//		cout << "Факультет:" << endl;
//		cout << students[n - 1].faculty.str;
//		cout << "Средний балл:" << endl;
//		cout << students[n - 1].average.nim;
//	}
//	if (sw == 2)
//	{
//		for (int i = 0; i < current_size; i++)
//		{
//			cout << "Фамилия" << endl;
//			cout << students[i].surname.str;
//			cout << "Имя" << endl;
//			cout << students[i].name.str;
//			cout << "Отчество" << endl;
//			cout << students[i].middleName.str;
//			cout << "Дата поступления: " << endl;
//			cout << students[i].enterDate.str;
//			cout << "Специальность:" << endl;
//			cout << students[i].type.str;
//			cout << "Группа:" << endl;
//			cout << students[i].group.limb;
//			cout << "Факультет:" << endl;
//			cout << students[i].faculty.str;
//			cout << "Средний балл:" << endl;
//			cout << students[i].average.nim;
//		}
//	}
//	cout << "Что дальше?" << endl;
//	cin >> choice;
//}
//void search()
//{
//	float aver;
//	cout << "Введите средний балл:" << "\n";
//	cin >> aver;
//	for (int z = 0; z < current_size; z++)
//	{
//		if (students[z].average.nim == aver)
//		{
//			cout << "Фамилия" << endl;
//			cout << students[z].surname.str;
//			cout << "Имя" << endl;
//			cout << students[z].name.str;
//			cout << "Отчество" << endl;
//			cout << students[z].middleName.str;
//			cout << "Дата поступления: " << endl;
//			cout << students[z].enterDate.str;
//			cout << "Специальность:" << endl;
//			cout << students[z].type.str;
//			cout << "Группа:" << endl;
//			cout << students[z].group.limb;
//			cout << "Факультет:" << endl;
//			cout << students[z].faculty.str;
//			cout << "Средний балл:" << endl;
//			cout << students[z].average.nim;
//		}
//	}
//	cout << "Что дальше?" << endl;
//	cin >> choice;
//}