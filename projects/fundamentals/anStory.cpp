#include <iostream>
#include <string>
using namespace std;

int main()
{
    string adjective1;
    string girlsName;
    string adjective2;
    string occupation1;
    string placeName;
    string clothing;
    string hobby;
    string adjective3;
    string occupation2;
    string boysName;
    string mansName;

    cout << "Enter an adjective" << endl;
    getline(cin, adjective1);

    cout << "Enter a girl's name" << endl;
    getline(cin, girlsName);

    cout << "Enter another adjective" << endl;
    getline(cin, adjective2);

    cout << "Enter an occupation" << endl;
    getline(cin, occupation1);

    cout << "Enter a place name" << endl;
    getline(cin, placeName);

    cout << "Enter a cloth" << endl;
    getline(cin,clothing);

    cout << "Enter a hobby" << endl;
    getline(cin,hobby);

    cout << "Enter another adjective" << endl;
    getline(cin,adjective3);

    cout << "Enter another occupation" << endl;
    getline(cin,occupation2);

    cout << "Enter a boy's name" << endl;
    getline(cin,boysName);

    cout << "Enter a man's name" << endl;
    getline(cin,mansName);


    cout << "There once was " << adjective1 << " girl named " << girlsName << " who was a " << adjective2
         << " " << occupation1 << " in the Kingdom of " << placeName << ". She loved to wear " << clothing
         << " and " << hobby << ". She wanted to marry the " << adjective3 << " " << occupation2 << " named "
         << boysName << " but her father, King " << mansName << " forbid her from seeing him." << endl;
}