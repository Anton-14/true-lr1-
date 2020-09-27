// LRRR !1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	cout << "hello man" << endl << "insert x:";

	float x = 0; //задание 1
	cin >> x;
	float A = 2 * pow((x), 5) - pow((x), 2) - 8;

	cout << setprecision(3) << A << endl;

	unsigned int a = 0; // задание 2
	cout << "insert a:";
	cin >> a;
	unsigned int B = 4 * abs(float(a) + 1) + sqrt(float(a) - 2);
	cout << showpos <<  B << endl;

	bool l = true, k = true, m = true, n = true; // задание 3
	cout << "insert l: " << endl;
	cin >> l;
	cout << "insert k:" << endl;
	cin >> k;
	cout << "insert m:" << endl;
	cin >> m;
	cout << "insert n:" << endl;
	cin >> n;
	bool C = l || !k && (m xor n);
	cout << boolalpha<< C << endl;

	int b = 0; // задание 4 
	cout << "insert b:";
	cin >> b;
	int D = pow(2, b);
	if ((b >= 0) && (b <= 7))
	{
		int D = pow(2, b);
		cout << dec << D;
		cout << oct << D << endl ;
	}
	else
	{
		cout << "luntik" << endl;
	}

	unsigned short  e = 0, d = 0, c = 0, f = 0; // задание 5
	cout << "insert e:" << endl;
	cin >> e;
	cout << "insert d:" << endl;
	cin >> d;
	cout << "insert c:" << endl;
	cin >> c;
	cout << "insert f:" << endl;
	cin >> f;
	unsigned short F = e || (!d && c) xor f;
	cout << setw(6) <<setfill('0') << internal << hex << showbase << F;
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
