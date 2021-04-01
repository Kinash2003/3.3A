//LongLong_Public.cpp
#include "LongLong_Public.h"



LongLong_Public::LongLong_Public()
	: LongLong(0, 0)
{}
LongLong_Public::LongLong_Public(double x = 0, double y = 0)
	: LongLong(x, y)
{}
LongLong_Public::LongLong_Public(LongLong_Public& A)
	: LongLong(A.GetX(), A.GetY())
{}

LongLong_Public& LongLong_Public::operator = (const LongLong_Public& A)
{
	LongLong(A.GetX(), A.GetY());
	return *this;
}
ostream& operator << (ostream& out, const LongLong_Public& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, LongLong_Public& A)
{
	double x, y;
	cout << " Cтаршу частину =  "; in >> x;
	cout << " Mолодшу частину = "; in >> y;
	A.SetX(x); A.SetY(y);
	return in;
}
LongLong_Public::operator string() const
{
	stringstream ss;
	ss << " Cтарша частина: " << this->GetX() << endl;
	ss << " Mолодша частина: " << this->GetY() << endl;
	return ss.str();
}
LongLong_Public operator +(LongLong_Public& A, LongLong_Public& B)
{
	LongLong_Public t(A.GetX() + B.GetX(), A.GetY() + B.GetY());
	return t;
}
LongLong_Public operator * (LongLong_Public& A, LongLong_Public& B)
{
	LongLong_Public t(A.GetX() * B.GetX(), A.GetY() * B.GetY());
	return t;
}
bool operator > (LongLong_Public& A, LongLong_Public& B)
{
	return ((A.GetX() > B.GetX()) || (A.GetX() == B.GetX() && A.GetY() > B.GetY()));
}
bool operator < (LongLong_Public& A, LongLong_Public& B)
{
	return ((A.GetX() < B.GetX()) || (A.GetX() == B.GetX() && A.GetY() < B.GetY()));
}
bool operator == (LongLong_Public& A, LongLong_Public& B)
{
	return (A.GetX() == B.GetX() && A.GetY() == B.GetY());
}
LongLong_Public& LongLong_Public::operator ++ ()
{
	this->SetX(this->GetX() + 1);
	return *this;
}
LongLong_Public& LongLong_Public::operator -- ()
{
	this->SetX(this->GetX() - 1);
	return *this;
}
LongLong_Public LongLong_Public::operator ++ (int)
{
	LongLong_Public t(*this);
	this->SetY(this->GetY() + 1);
	return t;
}
LongLong_Public LongLong_Public::operator -- (int)
{
	LongLong_Public t(*this);
	this->SetY(this->GetY() - 1);
	return t;
}