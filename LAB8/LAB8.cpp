// LAB8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include <iostream>
using namespace std;

const int N = 4;

void func1() {

	int num, t;
	do {
		cout << "введите пятизначное число ";// ввод с проверкой что число 5-значное
		cin >> num;
	} while (num < 10000 || num > 100000);

	while (num != 0) {
		t = num % 10;
		num /= 10;
		cout << t << endl;
	}

}
void func2() {
	char a;
	cout << "введите символ ";
	cin >> a;
	a = a - 32;
	cout << a << endl;
}

void func3() {
	int mas[N];
	int sr = 0;
	cout << "введите массив из 4 чисел: ";
	for (int i = 0; i < N; i++)
		cin >> mas[i];
	for (int i = 0; i < N; i++) {
		sr += mas[i];
	}
	cout << "среднее арифметическое = " << sr / 4 << endl;
}

int main()
{
	setlocale(LC_ALL, "RU");
	cout << "Задание 1" << endl;
	func1();
	cout << "Задание 2" << endl;
	func2();
	cout << "Задание 3" << endl;
	func3();

}
