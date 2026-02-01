#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double work_hours;
int dependents;
double gross_wage;
double tax;
double take_home;

int main(){

    cout <<"What is your working hours?" << endl;
    cin >> work_hours;
    cout<<endl;

    cout <<"How many dependents you have?" << endl;
    cin >> dependents;
    cout<<endl;

    if (work_hours < 0)
    {
        cout << "Invalid working hours" << endl;
        return 0;
    }

    if (dependents < 0)
    {
        cout << "Invalid number of dependents" << endl;
        return 0;
    }

    if (work_hours > 40)
    {
        gross_wage = 40 * 36.75 + (work_hours - 40) * 1.5 * 36.75;

    }
    else if (work_hours <= 40)
    {
        gross_wage = work_hours * 36.75;
    }
    else
    {
        cout <<"Error input"<< endl;
    }
    
    double Social = gross_wage * 0.06;
    double Federal = gross_wage * 0.15;
    double State = gross_wage * 0.04;
    double Bethlehem = gross_wage * 0.01;
    double union_amount = 20;

    cout << fixed << setprecision(2);
    
    if (dependents >= 2)
    {
        int health_insurance = 40;
        take_home = gross_wage - Social - Federal - State - Bethlehem - union_amount - 40;
        cout <<"Your gross wage is:" << gross_wage << endl;
        cout <<"Your social security tax is:" << Social << endl;
        cout <<"Your federal income tax is:" << Federal << endl;
        cout <<"Your state tax is:" << State << endl;
        cout <<"Your Bethlehem local tax is:" << Bethlehem << endl;
        cout <<"Your union dues is:" << union_amount << endl;
        cout <<"Your health insurance is:" << health_insurance << endl;
        cout <<"Your net income is:" << take_home << endl;
    }
    else
    {
        take_home = gross_wage - Social - Federal - State - Bethlehem - union_amount;
        cout <<"Your gross wage is:" << gross_wage << endl;
        cout <<"Your social security tax is:" << Social << endl;
        cout <<"Your federal income tax is:" << Federal << endl;
        cout <<"Your state tax is:" << State << endl;
        cout <<"Your Bethlehem local tax is:" << Bethlehem << endl;
        cout <<"Your union dues is:" << union_amount << endl;
        cout <<"Your net income is:" << take_home << endl;
    }
    
    return 0;
}