#include <iostream>
using namespace std;
// write a program that takes an input of age and prints if you are adult or not
int main()
{

    // int age;

    // cin >> age;
    // if (age >= 18)
    // {
    //     cout << "You are a adult";
    // }
    // else if (age <= 10)
    // {
    //     cout << "You are a child";
    // }

    /*

    A School has following rules for grading system :
    a.Below 25 = f,
    b.25-44  = E
    c.45-49 = C
    d.50-59 = D
    e.60-69 = B
    f.80-100 = A

    */

    /*
        int marks;
        cin >> marks;
        if (marks < 25)
        {
            cout << "F" << endl;
        }

        else if (marks <= 44)
        {
            cout << "E" << endl;
        }

        else if (marks <= 49)
        {
            cout << "D" << endl;
        }

        else if (marks <= 59)
        {
            cout << "C" << endl;
        }

        else if (marks <= 79)
        {
            cout << "B" << endl;
        }

        else if (marks <= 100)
        {
            cout << "A" << endl;
        }

        */

    /*
    take the age from the user and decide accordingly
    1. if age>18
    print ->you are not elegible for work
    2. if age <=18
    print ->you are elegible for work
    3. if age>=55m &&* age<=57
    print -> you are elegible for work but retirement soon
    4. if age<57
    print -> retirement time*/

    // int age;
    // cin >> age;

    // if (age < 18)
    // {
    //     cout << "you are not elegible for job";
    // }
    // else if (age <= 57)
    // {
    //     cout << "you are elegible for job.";
    //     if (age >= 55)
    //     {
    //         cout << ", but retirement soon";
    //     }
    // }
    // else
    // {
    //     cout << "Retirement time";
    // }

    // swtich statement

    /*
    Take the day number and print the corresponding day
    for 1 print monday
    for 2 print tuesday and so on /

    */

    int day;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Imvallid check";
        break;
    }
    return 0;
}