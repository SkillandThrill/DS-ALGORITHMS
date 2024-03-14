#include <bits/stdc++.h>
using namespace std;

void someThing()
{
    cout << "Something";
    // returns nothing
    // have to call it when using.
}

int sum(int a, int b)
{
    return a + b;
    // returns what you are telling the function to return
}

// -------------- void explainPair() -------------
// {
//     // To store 2 values
//     pair<int, int> p = {1, 3};
//     cout << " " << p.first << " " << p.second;
//     // if you want to store more than 2 values use nested pair method.
//     pair<int, pair<int, int>> a = {1, {2, 4}};
//     cout << " " << a.first << " " << a.second.first << " " << a.second.second;
//     pair<int, int> arr[] = {{1, 2},
//                             {3, 4},
//                             {5, 6}};
//     cout << " " << arr[1].second;
// }

void explainVector()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
}

int main()
{

    // print();
    int s = sum(1, 5);
    cout << s;
    // someThing();
    // explainPair();
    return 0;
}