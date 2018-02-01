#ifndef ArrayHelper_H
#define ArrayHelper_H
#include <iostream>
using namespace std;
template <typename T>
class ArrayHelper{
	private:
	int numEntries;
	T* arrayPointer;
	
	public:
	ArrayHelper(T*,int);
	~ArrayHelper();
	int getMax();
	int getMin();
	double getAverage();
};
#include "ArrayHelper.cpp"
#endif