#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<int, string> months;

    months[1] = "January";
    months[2] = "February";
    months[3] = "March";
    months[4] = "April";
    months[5] = "May";
    months[6] = "June";
    months[7] = "July";
    months[8] = "August";
    months[9] = "September";
    months[10] = "October";
    months[11] = "November";
    months[12] = "December";

    int number;
    cout << "Enter month number (1-12): ";
    cin >> number;

    if (months.find(number) != months.end())
    {
        cout << "Month name: " << months[number] << endl;
    }
    else
    {
        cout << "Invalid month number!" << endl;
    }

    return 0;
}