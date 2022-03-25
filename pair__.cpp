/* Date: 25 - 03 - 2022
Author: Sailendra */

#include <iostream>
using namespace std;

int main()
{
    // pair<int, int> p; // declarizatio of pair

    // Two way to initialize pair
    // p = make_pair(2, 4); // method 1
    // p = {2, 6}; // method 2

    // Copy the pair
    // pair<int, int> p1 = p;
    // p1.first = 100;

    // by reference
    // pair<int, int> p2 = p; // O(n) it is costly
    // pair<int, int> &p2 = p;
    // p2.first = 900; // it will change the value

    // cout << p.first << endl;
    // cout << p.second << endl;

    /******************another example*****************/
    // int a[] = {1, 2, 3};
    // int b[] = {2, 3, 4};

    // array of pairs
    pair<int, int> p_array[3];
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};

    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second <<endl;
    }

    return 0;
}