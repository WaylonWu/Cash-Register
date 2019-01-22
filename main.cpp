//----------------------------------------------------------
//  Name: Waylon Wu
//  E-mail Address: wiw5145@psu.edu
//  Class: CMPSC 121
//  Homework #3
//  Due Date: 10/5/16
//  Brief Project Description: Cash Register
//----------------------------------------------------------


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    float salesTax, mealPrice, total, amountTendered, change;
    char processStatus, processStatus2;
    int numCustomers = 0;
    
    cout << "Do you wish to process a transaction? (Y/N): ";
    cin >> processStatus;
    
    if(processStatus == 'y' || processStatus == 'Y')
    {
        do
        {
            numCustomers++;
            
            cout << "\nPrice of meal: $";
            cin >> mealPrice;
            
            salesTax = mealPrice * 0.08;
            total = mealPrice + salesTax;
            
            cout << setprecision(2) << fixed;
            cout << "Tax: $" << salesTax << endl;
            cout << "Total: $" << total << endl;
            
            cout << "Amount tendered: $";
            cin >> amountTendered;
            
            if(amountTendered > total)
            {
                cout << setprecision(2) << fixed;
                change = amountTendered - total;
                cout << "Change: $" << change << endl << endl;
                cout << "Thank you, come again!\n" << endl;
            }
            else if (amountTendered == total)
            {
                cout << "Change $0.00" << endl << endl;
                cout << "Thank you, come again!\n" << endl;
            }
            else if (amountTendered < total)
            {
                cout << "Sorry, the amount tendered was not enough.\n" << endl << endl;
            }
            cout << "Do you wish to process a transaction? (Y/N): ";
            cin >> processStatus2;
        }
        while (processStatus2 == 'y' || processStatus2 == 'Y');
        {
            cout << "Number of customers: " << numCustomers << endl;
        }
    }
    
    else if(processStatus == 'n' || processStatus == 'N')
    {
        cout << "Number of customers: " << numCustomers << endl << endl;
    }
    
    return 0;
}
