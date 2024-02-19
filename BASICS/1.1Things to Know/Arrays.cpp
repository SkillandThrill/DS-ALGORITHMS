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

    // 1D array
    /*
        int arr[5];
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

        arr[3] = 16;

        cout << arr[3];
    */

    // 2D array
    /*
        int arr[3][5];

        arr[1][3] = 78;

        cout << arr[1][3];
    */

    //    strings
    string s = "Gaurav";
    cout << s[0];

    int len = s.size();

    cout << s[len - 1];
    s[len - 1] = 'z';
    return 0;
}