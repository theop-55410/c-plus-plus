//the sum/product lab
/*
A short/small c++ program that takes 2 integers and 
outputs their sum and their product for the user,
and then allows the user to repeat as many times as 
they wish.
*/
#include <iostream>
#include <cstdlib>


using namespace std;

int main() {

//g++ filename  -o  nameOfExecutable

    //first integer
    int a;
    //second integer
    int b;
    //choice variable, which will be used to either run the program again or terminate
    char choice;

    do {

    cout << "Hello! this is a basic c++ program that takes two integers and outputs their sum and their product. " << endl;
    cout << "If you would like to repeat this program multiple times, make sure to enter 'y' at the end of the program. If not, press 'n' and then return" << endl;
    //get all necessary input from the user
    cout << "Enter the first integer: ";
    cin >> a;
    cout << "Enter the second integer: ";
    cin >> b;

    //sum
    int sum = a + b;
    cout << "Their sum is " << sum << endl;
    //product
    int product = a * b;
    cout << "And their product is " << product << endl;
    //repeat?
    cout << "Would you like to repeat this program? y/n: ";
    cin >> choice;

    } while (choice == 'y');


}