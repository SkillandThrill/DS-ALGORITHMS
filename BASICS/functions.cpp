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

// int sum(int num1, int num2)
// {
//     int num3 = num1 + num2;
//     return num3;
// }

// pass by values;

// void doSomething(int num)
// {
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
// }

// pass by reference

// void doSomething(string s)
// {
//     s[0] = 't';
//     cout << s << endl;
// }

void doSomething(int arr[], int n)
{
    arr[0] += 100;
    cout << "value inside function :" << arr[0] << endl;
}
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
    /*
        int num1, num2;
        cin >> num1 >> num2;
        int res = sum(num1, num2);
        cout << res;
    */

    /*    int num1, num2;

     cin >> num1 >> num2;
     int minimum = max(num1, num2);
     cout << minimum;
     */

    // int num = 10;
    // doSomething(num);
    // cout << num << endl;

    // string s = "Gaurav";
    // doSomething(s);
    // cout << s << endl;

    // int arr[5];

    // for (int i = 0; i <= 4; i = i + 1)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i <= 4; i = i + 1)
    // {
    //     cout << arr[i] << endl;
    // }

    // example of array in pass by reference

    int n = 5;
    int arr[n];
    for (int i = 0; i < n; i = i + 1)
    {
        cin >> arr[i];
    }

    doSomething(arr, n);
    for (int i = 0; i <= n; i = i + 1)
    {
        cin >> arr[i];
    }

    doSomething(arr, n);

    cout << "value inside  int  main : " << arr[0] << endl;
    return 0;
}
