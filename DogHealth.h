#ifndef DogHealth_H
#define DogHealth_H

#include <string>
#include <iostream>
#include "ArrayHelper.h"
using namespace std;


class DogHealth{
	private:
		string dog;//contains the dog's name
		int entries;//corresponds to # of months in a year
		int dogAge;//contains the dog's age
		double dogWeight[12];//contains the dog's weight per month in an array
		int dogRestingBPM [12];//contains the dog's restingBPM in an array
	public :
	
	
		DogHealth();
		
		/*
				Function name:  printDogHealth
				Parameters:  	none 
				Returns: 		void
				Purpose:  		This function prints all the information in the attributes
		*/
		
		void printDogHealth();
		
		/*
				Function name:  printWeightStatistics
				Parameters:  	nothing
				Returns: 		void
				Purpose:  		This function prints :
					o month that the dog had the highest weight and the weight amount
					o month that the dog had the lowest weight and the weight amount
					o the average weight of all the months
		*/
		void printWeightStatistics();
		
		/*
				Function name:  printWieghtStatistics
				Parameters:  	a pointer pointing to a double array & an int the size of the array 
				Returns: 		void
				Purpose:  		This function prints :
					o month that the dog had the highest weight and the weight amount
					o month that the dog had the lowest weight and the weight amount
					o the average weight of all the months
		*/
		void printHeartRateStatistics();
		
	
};
#endif