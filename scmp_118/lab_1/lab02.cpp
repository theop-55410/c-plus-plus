//the coin lab
/*
A small c++ program that takes the number of quarters, dimes,
and nickels and outputs the number of total cents for the 
user. Then the user may repeat the program as many times as 
they like.
*/
#include <iostream>
#include <cstdlib>


using namespace std;


int main() {

    int dimes;
    int nickels;
    int quarters;

    int dcents;
    int ncents;
    int qcents;

    int total_cents;

    char choice;

    do {
        
    cout << "Hello! this is a basic c++ program that takes the number of nickels, dimes, and quarters, and outputs the total number of cents to the user. " << endl;
    cout << "If you would like to repeat this program multiple times, make sure to enter 'y' at the end of the program. If not, press 'n' and then return" << endl;
    
    cout << "enter the number of nickels: ";
    cin >> nickels;
    cout << "enter the number of dimes: ";
    cin >> dimes;
    cout << "enter the number of quarters: ";
    cin >> quarters;

    ncents = 5 * nickels;
    dcents = 10 * dimes;
    qcents = 25 * quarters;

    total_cents = ncents + dcents + qcents;

    cout << "you have " << total_cents << " cents. ";

    cout << "Would you like to repeat this program? y/n: ";
    cin >> choice;


    } while (choice == 'y');
    


}