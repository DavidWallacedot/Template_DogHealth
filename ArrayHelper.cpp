#include "ArrayHelper.h"

using namespace std;
template <typename T>
ArrayHelper<T>::ArrayHelper(T* array,int numEntries){
	this->numEntries = numEntries;
	arrayPointer = new T  [numEntries];
	for(int i = 0; i<numEntries;i++){
		arrayPointer[i] = array[i];
	}
	
}

template <typename T>
ArrayHelper<T>::~ArrayHelper(){
	delete [] arrayPointer;
}

template <typename T>
int ArrayHelper<T>::getMax(){
	int max = 0;
	for(int i = 0 ; i<numEntries; i++){
		if(arrayPointer[i]>max){
			max = arrayPointer[i];		
		}
		
	}
	return max;
	
}

template <typename T>
int ArrayHelper<T>::getMin(){
		int min = 500;
	for(int i = 0 ; i<numEntries; i++){
		if(arrayPointer[i]<min){
			min = arrayPointer[i];		
		}
		
	}
	return min;

	
}
template <typename T>
double ArrayHelper<T>::getAverage(){
	double total = 0;
	double avg; 
	for(int i = 0 ; i<numEntries; i++){
		total  += arrayPointer[i] ;
	}
	avg = total / numEntries;
	return avg; 
}