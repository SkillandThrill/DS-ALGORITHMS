#include <iostream>
using namespace std;

// Functions are set  of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase reliability
// Functions are used to use same code Multiple times

// void -> does not return anything
// return ->
// parameterised
// non parameterised

/*
void printName(string name)
{
    cout << "Hey " << name << endl;
}
*/
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    /*
        string name;
        cin >> name;
        printName(name);

        string name2;
        cin >> name2;
        printName(name2);

        */

    // Take 2 numbers and print its sum

    int num1, num2;
    cin >> num1 >> num2;
    int num3 = num1 + num2;
    cout << num3 << endl;
    return 0;
}