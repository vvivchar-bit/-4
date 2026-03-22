#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, string> phoneBook;

    phoneBook["Alice"] = "+380501111111";
    phoneBook["Bob"] = "+380502222222";
    phoneBook["Charlie"] = "+380503333333";
    phoneBook["Diana"] = "+380504444444";

    string name;
    cout << "Enter name: ";
    cin >> name;

    if (phoneBook.find(name) != phoneBook.end())
    {
        cout << "Phone number: " << phoneBook[name] << endl;
    }
    else
    {
        cout << "Contact not found!" << endl;
    }

    return 0;
}
