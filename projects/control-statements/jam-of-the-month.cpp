#include <iostream>
using namespace std;

int main()
{
    char wichPackage;
    int howManyJams = 0;
    int monthlyFee = 0;
    int jamsIncluded = 0;
    int jamPrice = 0;
    int totalCost;

    cout << "what package do you own? A, B, or C" << endl;
    cin >> wichPackage;

    cout << "How many jams, jelliers or preserves did you purchase this month?" << endl;
    cin >> howManyJams;

    if (wichPackage == 'A' || wichPackage == 'a')
    {
        monthlyFee = 8;
        jamsIncluded = 2;
        jamPrice = 5;
    }
    else if (wichPackage == 'B' || wichPackage == 'b')
    {
        monthlyFee = 12;
        jamsIncluded = 4;
        jamPrice = 4;
    }
    else if (wichPackage == 'C' || wichPackage == 'c')
    {
        monthlyFee = 15;
        jamsIncluded = 6;
        jamPrice = 3;
    }
    else
    {
        cout << "You select a non-existant package" << endl;
    }



    // calculate total cost
    if (howManyJams <= jamsIncluded)
    {
        // just charge the monthly fee
        totalCost = monthlyFee;
    }else {
        // charge momthly fee + (difference) * jamPrice
        totalCost = monthlyFee + (howManyJams - jamsIncluded) * jamPrice;
    }


    cout << "You owe $" << totalCost << endl;

    return 0;
}