//design an algorithm that calculates the monthly paycheck of a salesperson at a local department store.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*need to know the base salary, the number of years that the salesperson has been with the company, 
    and the total sales made by the salesperson for that month. */

    int baseSalary;
    int noOfServiceYears;
    int bonus;
    int totalSales;
    double additionalBonus;
    double paycheck;

    //Get baseSalary.
    cout << "Enter base salary: ";
    cin >> baseSalary;

    //Get noOfServiceYears
    cout << "Enter number of service years: ";
    cin >> noOfServiceYears;

    //Calculate bonus using the following formula:
    if (noOfServiceYears <= 5){
        bonus = 10 * noOfServiceYears;
    }
    else{
        bonus = 20 * noOfServiceYears;
    }

    //Get totalSales.
    cout << "Enter total sales: ";
    cin >> totalSales;

    //Calculate additionalBonus using the following formula:
    if (totalSales < 5000){
        additionalBonus = 0;
    }
    else{
        if ((totalSales >= 5000) && (totalSales < 10000)){
            additionalBonus = totalSales * 0.03;
        }
        else{
            additionalBonus = totalSales * 0.06;
        }
    }

    //Calculate payCheck using the equation:
    paycheck = baseSalary + bonus + additionalBonus;

    //output monthly paycheck of a salesperson at a local department store.
    cout << "Your monthly paycheck is: " << paycheck << endl;

}