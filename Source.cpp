#include <iostream>
#include <ctime>
using namespace std;
int main() {
	/*const int n = 10;
	int mas[n]
	srand(time(nullptr));
	//диапазон от -20 до 20
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 41 - 20;
		cout << mas[i] << ' ';

	}
	cout << endl;*/
	/*const int n = 10;
	int mas[n];
	mas[0] = 1;
	cout << mas[0] << ' ';
	for (int i = l; i < n; i++);
	mas[i] = mas[i - 2]*2;
	cout<<mas[i]<<' ';*/
	/*const int n = 10;
	int mas[n];
	mas[0] = 2;
	cout << mas[0] << ' ';
	for (int i = 1; i < n; i++);
	mas[i] = mas[i - 1] * 2;
	cout << mas[i] << ' ';*/
	/*const int n = 10;
	int mas[n];
	int a, d;
	cin >> a >> d;
	mas[0] = a;
	cout << mas[0] << ' ';
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i - 1] + d;
		cout << mas[i] << ' ';
	}*/
	/*Array4.Дано целое число N(> 1), а также первый член A и знаменатель D
		геометрической прогрессии.Сформировать и вывести массив размера N,
		содержащий N первых членов данной прогрессии :
	A, A·D, A·D
		2
		, A·D
		3
		, . . . .*/
	/*const int n = 10;
	int mas[n];
	int a, d;
	cin >> a >> d;
	mas[0] = a;
	cout << mas[0] << ' ';
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i - 1] * d;
		cout << mas[i] << ' ';}*/
	//Array5.Дано целое число N(> 2).Сформировать и вывести целочисленный
	//массив размера N, содержащий N первых элементов последовательности
	//чисел Фибоначчи FK :
	//F1 = 1, F2 = 1, FK = FK−2 + FK−1, K = 3, 4, . . . .
	/*const int n = 10;
	int mas[n];
	int a;
	cin >> a;
	mas[0] = a;
	cout << mas[0] << ' ';
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i *2] ;
		cout << mas[i] << ' ';
	}*/
	//Array6.Даны целые числа N(> 2), A и B.Сформировать и вывести целочисленный массив размера N, первый элемент которого равен A, второй
	//равен B, а каждый последующий элемент равен сумме всех предыдущих.
	const int n = 10;
	int mas[n];
	int a, b;
	cin >> a>>b;
	mas[0] = a;
	cout << mas[0] << ' ';
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i *2] ;
		cout << mas[i] << ' ';
	}
}