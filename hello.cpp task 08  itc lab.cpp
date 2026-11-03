
#include <iostream>
using namespace std;

// Name: Muhammad Zoraiz Sultan
// Roll No: 0122

int main()
{
    int sideA, sideB, sideC;

    cout << "Enter side A: ";
    cin >> sideA;

    cout << "Enter side B: ";
    cin >> sideB;

    cout << "Enter side C: ";
    cin >> sideC;

    if (sideA > 0)
    {
        if (sideB > 0)
        {
            if (sideC > 0)
            {
                if (sideA + sideB > sideC)
                {
                    if (sideA + sideC > sideB)
                    {
                        if (sideB + sideC > sideA)
                        {
                            cout << "Valid triangle" << endl;

                            if (sideA == sideB)
                            {
                                if (sideB == sideC)
                                {
                                    cout << "Type: Equilateral" << endl;
                                }
                                else
                                {
                                    cout << "Type: Isosceles" << endl;
                                }
                            }
                            else
                            {
                                if (sideA == sideC)
                                {
                                    cout << "Type: Isosceles" << endl;
                                }
                                else
                                {
                                    if (sideB == sideC)
                                    {
                                        cout << "Type: Isosceles" << endl;
                                    }
                                    else
                                    {
                                        cout << "Type: Scalene" << endl;
                                    }
                                }
                            }
                        }
                        else
                        {
                            cout << "Not a valid triangle: two sides must add up to more than the third" << endl;
                        }
                    }
                    else
                    {
                        cout << "Not a valid triangle: two sides must add up to more than the third" << endl;
                    }
                }
                else
                {
                    cout << "Not a valid triangle: two sides must add up to more than the third" << endl;
                }
            }
            else
            {
                cout << "Invalid: every side must be greater than 0" << endl;
            }
        }
        else
        {
            cout << "Invalid: every side must be greater than 0" << endl;
        }
    }
    else
    {
        cout << "Invalid: every side must be greater than 0" << endl;
    }

    return 0;
}






















        






