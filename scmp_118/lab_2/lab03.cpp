//title
/*




*/
#include <iostream>
#include <cstdlib>


using namespace std;


int main() {

    float payRate = 16.68;

    float overtimePayRate = 1.5;
    float socialSecurityTax = .06;
    float federalIncomeTax = .14;
    float stateIncomeTax = .05;
        
    
    int unionDues = 10;
    int moreThanThree = 35;
    int dependents;

    float hoursWorked;
    //float normalHours;
    float overtimeHours;
    float overtimePay;
    float normalPay;    
    float GrossPay;
    float NetPay;

    char choice;



    do
    {
        
        cout << "Hello! this is a basic c++ program that calculates an employee's pay from" <<
        " their hours, with deductions for things like taxes, union dues, etc, and a multiplier " 
        << "for the amount of overtime hours worked. " << endl;
        cout << "If you would like to repeat this program multiple times, make sure to enter 'y' " 
        << "at the end of the program. If not, press 'n' and then return" << endl;
        
        cout << "please enter the amount of hours x employee worked";
        cin >> hoursWorked;

        if(hoursWorked > 40) {
            overtimeHours = hoursWorked - 40;
            overtimePay = overtimeHours * (overtimePayRate * payRate); 
            GrossPay = overtimePay + (40 * payRate);
        } else {
            GrossPay = hoursWorked * payRate;
        }

        cout << endl << "please enter the number of dependents" << endl;
        cin >> dependents;

        if(dependents > 3) {
            NetPay = GrossPay - ((GrossPay * socialSecurityTax) + (GrossPay * federalIncomeTax) 
            + (GrossPay * stateIncomeTax) + unionDues + moreThanThree);
        } else {
            NetPay = GrossPay - ((GrossPay * socialSecurityTax) + (GrossPay * federalIncomeTax) 
            + (GrossPay * stateIncomeTax) + unionDues);
        }
            
            


        

        

        cin >> choice;

    } while (choice == 'y');
    
}