// DoMathInteractiveConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "interactapp.h"

using namespace std;

void printAllDomainAreaOptions();
int getWhatTheyWant();

void printAllDomainAreaOptions() {
    
    
    cout << "Origins " << endl;
    cout << "Foundations" << endl;
    cout << "Pure Mathematics " << endl;
    cout << "Applied Mathematics " << endl;

}

int getWhatTheyWant() {
    int choice;

    cout << "1 - Origins " << endl;
    cout << "2 - Foundations" << endl;
    cout << "3 - Pure Mathematics " << endl;
	cout << "4 - Applied Mathematics " << endl;
	cout << "5 - print off list " << endl;
	cout << "6 - Exit " << endl;

    cin >> choice;
    return choice;



}


//starrtConsoleInteraction
//start from main to start interaction with console
void starrtConsoleInteraction() {
	int whatCommand;
	whatCommand = getWhatTheyWant();

	while (whatCommand != 6)
	{
		switch (whatCommand)
		{
		case 1:
			printf("origins of mathematics");
			break;
		case 2:
			printf("foundations of mathmatics module");
			break;
		case 3:
			printf("Pure Mathematics  module");
			break;
		case 4:
			printf("fApplied mathmatics module");
			break;
		case 5:
			printf("print off outline");
			break;
		case 6:
			std::cout << "should exit\n";
			break;
		default:
			break;
		}

		whatCommand = getWhatTheyWant();
	}
}

