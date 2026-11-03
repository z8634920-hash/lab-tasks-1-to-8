
#include <iostream>
using namespace std;

// Name: Muhammad Zoraiz Sultan
// Roll No: 0122

int main()
{
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (year > 0)
    {
        if (year % 4 == 0)
        {
            if (year % 100 == 0)
            {
                if (year % 400 == 0)
                {
                    cout << year << " is a leap year" << endl;
                    cout << "February has 29 days" << endl;
                }
                else
                {
                    cout << year << " is not a leap year" << endl;
                    cout << "February has 28 days" << endl;
                }
            }
            else
            {
                cout << year << " is a leap year" << endl;
                cout << "February has 29 days" << endl;
            }
        }
        else
        {
            cout << year << " is not a leap year" << endl;
            cout << "February has 28 days" << endl;
        }
    }
    else
    {
        cout << "Invalid year" << endl;
    }

    return 0;
}



















        






