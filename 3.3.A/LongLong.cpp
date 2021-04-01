//LongLong.cpp
#include "LongLong.h"

using namespace std;

double LongLong::GetX() const { return x; }
double LongLong::GetY() const { return y; }

void LongLong::SetX(double value) { x = value; }
void LongLong::SetY(double value) { y = value; }
LongLong::LongLong() { x = 0, y = 0; }

LongLong::LongLong(double x = 0, double y = 0)
{
	this->x = x;
	this->y = y;
}
LongLong::LongLong(const LongLong& A)
{
	x = A.GetX();
	y = A.GetY();
}

string LongLong::toString() const
{
	stringstream sout;

	sout << " Cтаршу частину= " << GetX() << endl;
	sout << " Mолодшу частину = " << GetY() << endl;
	return sout.str();
}
void LongLong::Read()
{
	cout << " Cтаршу частину = "; cin >> x;
	cout << " Mолодшу частину = "; cin >> y;
}
void LongLong::Display()
{
	cout << " Cтарша частина: " << x << endl;
	cout << " Mолодша частина: " << y << endl;
}