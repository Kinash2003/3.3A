//LongLong_Public.h
#pragma once

#include "LongLong.h"

class LongLong_Public : public LongLong {
public:
	LongLong_Public();
	LongLong_Public(double, double);
	LongLong_Public(LongLong_Public&);

	LongLong_Public& operator = (const LongLong_Public&);
	friend ostream& operator << (ostream&, const LongLong_Public&);
	friend istream& operator >> (istream&, LongLong_Public&);
	operator string() const;

	friend LongLong_Public operator + (LongLong_Public&, LongLong_Public&);
	friend LongLong_Public operator * (LongLong_Public&, LongLong_Public&);

	friend bool operator > (LongLong_Public&, LongLong_Public&);
	friend bool operator < (LongLong_Public&, LongLong_Public&);
	friend bool operator == (LongLong_Public&, LongLong_Public&);

	LongLong_Public& operator ++ ();
	LongLong_Public& operator -- ();
	LongLong_Public operator ++ (int);
	LongLong_Public operator -- (int);
};

