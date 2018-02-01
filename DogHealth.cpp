#include "DogHealth.h"

using namespace std;


DogHealth::DogHealth(){
	
	
	cout<<"What is the dog\'s name? "<<endl;
	
	getline(cin, dog);
	cout<<"What is the dog\'s age?"<<endl;
	cin>>dogAge;
	cout<<"Please enter in the dog\'s wieght (LBS) & resting heart rate (BPM)"<<endl;
	cout<<"for each month in 2017."<<endl;
	for (int i = 0 ; i<=11; i++){
		cout<<"Month "<<i+1<<" WEIGHT: ";
		cin>>dogWeight[i];
		cout<<"Month "<<i+1<<" RESTING HEART RATE: ";
		cin>>dogRestingBPM[i];
		cout<<endl<<endl;
		entries = i+1;
	}
	for(int i =0; i<=11;i++){cout<<dogWeight[i]<<endl;}
	cout<<"Thank you "<<dog<<"\'s  record has been saved!"<<endl;
}

void DogHealth:: printDogHealth(){
	
			cout<< "Name: "<<dog<<endl;	
			cout<< "Age: "<<dogAge<<endl;	
			
			cout<< "Weight per month:"<<endl<<endl;
			for (int i = 0 ; i<=11; i++){
					cout<<"Month "<<i+1<<" ";
					cout<<dogWeight[i]<<endl;
				}
				
			cout<< "Heart Rate per month:"<<endl<<endl;	
			for (int i = 0 ; i<=11; i++){
					cout<<"Month "<<i+1;
					cout<<dogRestingBPM[i]<<endl;
				}

}


void DogHealth::printWeightStatistics(){
	
	
	ArrayHelper<double>* arrayHelper = new ArrayHelper<double>(dogWeight,entries);
	int heaviestMonth; 
	heaviestMonth = arrayHelper->getMax();
	int lightestMonth; 
	lightestMonth = arrayHelper->getMin();
	double avgWeight ;
	avgWeight= arrayHelper->getAverage();
	cout<<"WEIGHT STATISTICS"<<endl;
	cout<<"-----------------------------------------------------"<<endl;
	
	cout<<dog<<" had the highest weight in month "<<heaviestMonth;
	cout<<" at "<< dogWeight[heaviestMonth]<<" pounds."<<endl;
	
	cout<<dog << " had the lowest weight in month "<<lightestMonth;
	cout<<" at "<< dogWeight[lightestMonth]<<" pounds."<<endl;
	
	cout<<dog<<"\'s average weight over one year was "<<avgWeight<<" pounds.\n";
	
	
}
void DogHealth::printHeartRateStatistics(){
	
	
	ArrayHelper<int>* arrayHelper = new ArrayHelper<int>(dogRestingBPM,entries);
	int highestMonth;
	highestMonth = arrayHelper->getMax();
	int lowestMonth; 
	lowestMonth = arrayHelper->getMin();
	double avgRestingBPM;
	avgRestingBPM	= arrayHelper->getAverage();
	cout<<"HEART RATE STATISTICS"<<endl;
	cout<<"-----------------------------------------------------"<<endl;
	
	cout<<dog<<" had the highest resting heart rate in month "<<highestMonth;
	cout<<" at "<< dogRestingBPM[highestMonth]<<" pounds."<<endl;
	
	cout<<dog << " had the lowest resting heart rate in month "<<lowestMonth;
	cout<<" at "<< dogRestingBPM[lowestMonth]<<" pounds."<<endl;
	
	cout<<dog<<"\'s average resting heart rate over one year was "<<avgRestingBPM<<" pounds.\n";
	
	
	
}