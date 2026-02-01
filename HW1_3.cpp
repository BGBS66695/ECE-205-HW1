#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
double credit = 1000;
double interest;
double principal;
double balance = 1000;
double total_interest = 0;
double total_paid = 0;
int month;
double payment;

int main()
{
    cout << right
     << setw(5)  << "Month#"
     << setw(10) << "Interest"
     << setw(12) << "Principal"
     << setw(12) << "Balance"
     << setw(12) << "    Total Interest  "
     << setw(12) << "Total Paid"
     << endl;

    while (balance > 0.005)
    {
        if (principal >= balance)
        {
            interest = balance * 0.015;
            principal = balance;
            payment = interest + principal;
            total_interest = total_interest + interest;
            total_paid = total_paid + payment;
            balance = 0;
            month++;
            cout << setw(5) << month 
            << setw(10) << interest
            << setw(12) << principal
            << setw(12) << balance
            << setw(15) << total_interest
            << setw(15) << total_paid
            << endl;
            break;
            
        }

        interest = credit * 0.015;
        principal = 50 - interest;
        balance = credit - principal;
        total_interest = total_interest + interest;
        total_paid = total_paid + 50;
        credit = balance;
        month++;
        
        cout << fixed << setprecision(2);

        cout << setw(5) << month 
        << setw(10) << interest
        << setw(12) << principal
        << setw(12) << balance
        << setw(15) << total_interest
        << setw(15) << total_paid
        << endl;
    }
    
    return 0;
}