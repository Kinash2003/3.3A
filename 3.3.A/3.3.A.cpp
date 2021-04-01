// 3.3A.cpp 
#include <Windows.h>
#include <iostream>
#include "LongLong_Public.h"
#include "LongLong_Private.h"
using namespace std;

int main() {
	

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << " LongLong_Private: " << endl;

	LongLong_Private A1, B1;
	cout << " Введіть A1: " << endl;
	cin >> A1;
	cout << " Введіть B1: " << endl;
	cin >> B1;

	cout << " A1 + B1: " << endl;
	cout <<  A1 + B1 << endl;

	cout << " A1 * B1: " << endl;
	cout << A1 * B1 << endl;

	cout << " A > B " << endl;
	if (A1 > B1) cout << " Yes " << endl; else cout << " No " << endl;

	cout << " A < B " << endl;
	if (A1 < B1) cout << " Yes " << endl; else cout << " No " << endl;

	cout << " A == B " << endl;
	if (A1 == B1) cout << " Yes " << endl; else cout << " No " << endl;

	cout << " A1++ " << endl; cout << A1++ << endl;
	cout << " A1-- " << endl; cout << A1-- << endl;
	cout << " ++A1 " << endl; cout << ++A1 << endl;
	cout << " --A1 " << endl; cout << --A1 << endl;

	cout << " LongLong_Public: " << endl;

	LongLong_Public A2, B2;

	cout << " Введіть A2: " << endl;
	cin >> A2;
	cout << " Введіть B2: " << endl;
	cin >> B2;

	cout << " A2 + B2: " << endl;
	cout << A2 + B2 << endl;

	cout << " A2 * B2: " << endl;
	cout << A2 * B2 << endl;

	cout << " A > B " << endl;
	if (A2 > B2) cout << " Yes " << endl; else cout << " No " << endl;

	cout << " A < B " << endl;
	if (A2 < B2) cout << " Yes " << endl; else cout << " No " << endl;

	cout << " A == B " << endl;
	if (A2 == B2) cout << " Yes " << endl; else cout << " No " << endl;

	cout << " A2++ " << endl; cout << A2++ << endl;
	cout << " A2-- " << endl; cout << A2-- << endl;
	cout << " ++A2 " << endl; cout << ++A2 << endl;
	cout << " --A2 " << endl; cout << --A2 << endl;

	return 0;
}