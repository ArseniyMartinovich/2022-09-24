#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	//Boolean1◦.Дано целое число A.Проверить истинность высказывания : «Число A является положительным».
	/*int A;
	cin >> A;
	bool res;
	res = A > 0;
	cout << boolalpha << res << endl;*/

	//Boolean2◦.Дано целое число A.Проверить истинность высказывания : «Число A является нечетным».
	/*int a;
	cin >> a;
	bool res;
	res = a % 2 != 0;
	cout << boolalpha << res << endl;*/


	//Boolean3◦.Дано целое число A.Проверить истинность высказывания : «Число A является четным».
	/*int a;
	cin >> a;
	bool res;
	res = a % 2 == 0;
	cout << boolalpha << res << endl;*/


	//Boolean4◦.Даны два целых числа : A, B.Проверить истинность высказывания :«Справедливы неравенства A > 2 и B ≤ 3».
	/*int a, b;
	bool res;
	cin >> a >> b;
	res = a > 2 && b <= 3;
	cout << boolalpha << res << endl;*/

	//Boolean5◦.Даны два целых числа : A, B.Проверить истинность высказывания :«Справедливы неравенства A ≥ 0 или B < −2»
	/*int a, b;
	cin >> a >> b;
	bool res;
	res = a >= 0 || b < -2;
	cout << boolalpha << res << endl;*/

	/*Boolean6◦.Даны три целых числа : A, B, C.Проверить истинность высказывания : «Справедливо двойное неравенство A < B < C».*/
	/*int a, b, c;
	cin >> a >> b >> c;
	bool res;
	res = a < b && b < c;
	cout << boolalpha << res << endl;*/

	//Boolean7◦.Даны три целых числа : A, B, C.Проверить истинность высказывания : «Число B находится между числами A и C».
	/*int a, b, c;
	cin >> a >> b >> c;
	bool res;
	res = a < b && b < c || b < a && b > c;
	cout << boolalpha << res << endl;*/

	//Boolean8◦.Даны два целых числа : A, B.Проверить истинность высказывания :«Каждое из чисел A и B нечетное».
	/*int a, b;
	cin >> a >> b;
	bool res;
	res = a % 2 == 0 && b % 2 == 0;
	cout << boolalpha << res << endl;*/

	//Boolean9◦.Даны два целых числа : A, B.Проверить истинность высказывания :«Хотя бы одно из чисел A и B нечетное».
	/*int a, b;
	cin >> a >> b;
	bool res;
	res = a % 2 != 0 || b % 2 != 0;
	cout << boolalpha << res << endl;*/

	//Boolean10◦.Даны два целых числа : A, B.Проверить истинность высказывания : «Ровно одно из чисел A и B нечетное».
	/*int a, b;
	cin >> a >> b;
	bool res;
	res = a % 2 == 1 && b % 2 == 0 || a % 2 == 0 && b % 2 == 1;
	cout << boolalpha << res << endl;*/

	//Boolean11◦.Даны два целых числа : A, B.Проверить истинность высказывания : «Числа A и B имеют одинаковую четность».
	/*int a, b;
	cin >> a >> b;
	bool res;
	res = a % 2 == 0 && b % 2 == 0 || a % 1 == 0 && b % 2 == 1;
	cout << boolalpha << res << endl;*/

	//Boolean12◦.Даны три целых числа : A, B, C.Проверить истинность высказывания : «Каждое из чисел A, B, C положительное».
	/*int a, b, c;
	cin >> a >> b >> c;
	bool res;
	res = a > 0 && b > 0 && c > 0;
	cout << boolalpha << res << endl;*/

	//Boolean13◦.Даны три целых числа : A, B, C.Проверить истинность высказывания : «Хотя бы одно из чисел A, B, C положительное».
	/*int a, b, c;
	cin >> a >> b >> c;
	bool res;
	res = a > 0 || b > 0 || c > 0;
	cout << boolalpha << res << endl;*/
}