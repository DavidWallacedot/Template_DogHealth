#this is a comment

all		:	DogHealth

DogHealth	:	Driver.o DogHealth.o  
			g++ -o DogHealth.exe Driver.o  DogHealth.o

#here is how to generate the .o file
#if any of the files listed has been altered since the last compile, generate a new .o file
Driver.o	:	Driver.cpp
			g++ -I ./ -c Driver.cpp
				
DogHealth.o		:	DogHealth.cpp
			g++ -I ./ -c DogHealth.cpp
			
#ArrayHelper.o	:	ArrayHelper.cpp
#			g++ -I ./ -c ArrayHelper.cpp
			

clean	:	DogHealth.exe
			del *.o 
			del DogHealth.exe