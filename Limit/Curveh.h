#pragma once
#include<vector>
using std::vector;







template<typename T1, typename T2>
struct point
{
	T1 X;
	T2 Y;
};




template<typename T>
class Curve
{
public:

	//std::numeric_limits<double>::epsilon(); // �������

public:
	typedef double (*func)(double*, double*);
	
	//���������
	typedef double (*root)(double);


public:
	virtual void cmp(Curve<T>& c) = 0;

	virtual void opera(Curve<T>& c, func f) = 0;

	virtual void addval(double val) {};

	//virtual void vector<T> getXlst() {};

	//virtual void vector<double> getYlst() {};


};