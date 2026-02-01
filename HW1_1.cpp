#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    int seconds;
    cout << "Please type the seconds you want to calculate:" << endl;
    cin >> seconds;

    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int remaining_seconds = seconds % 60;
    
    cout << "Hours is: " << hours << " Minutes is:" << minutes << " Seconds is:" << remaining_seconds << endl;
    
    cout << fixed << setprecision(4);
    double total_hours = seconds / 3600.0;
    double total_seconds = seconds / 60.0;
    cout << fixed << setprecision(4);
    cout << total_hours << " hours" << '\n' << total_seconds << " minutes" << endl;




    return 0;
}