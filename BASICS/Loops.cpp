#include <iostream>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // for  loop
    for (int i = 1; i <= 10; i = i + 1)
    {
        cout << "Guarav" << endl;
    }

    // while loop

    int i = 1;
    while (i <= 3)
    {
        cout << "HI" << endl;
        i = i + 1;
    }

    // do while
    int j = 1;
    do
    {
        cout << "Hello" << endl;
        j = j + 1;
    } while (j <= 5);

    return 0;
}