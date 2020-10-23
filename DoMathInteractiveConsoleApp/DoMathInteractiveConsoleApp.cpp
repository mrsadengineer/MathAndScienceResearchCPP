// DoMathInteractiveConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "HeaderTest.h"

using namespace std;

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
    cout << "5 - Exit " << endl;

    cin >> choice;
    return choice;



}




int main1()
{



    std::cout << "Domain of Mathematics Interative Console App\n";

    testheader();


    return 0;
    //int whatOptionToDisplay;

    //whatOptionToDisplay = getWhatTheyWant();

    //while (whatOptionToDisplay != 5) {

    //}


   // printAllDomainAreaOptions();

}





void testheader() {

   std::cout << "test from header";
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
