/* Date: 22 - 03 - 2022
Author: Sailendra */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1;        // Declare a vector
    vec1 = {10, 20, 30, 40}; // initialize a integer vector

    // Size of the vector
    // int size;
    // size = vec1.size();
    // cout<< "The size of a vector is "<<size<<endl;

    // Add the element at the end
    // vec1.push_back(50);

    // Delete an element
    // vec1.pop_back();

    // Clear all elements form vector
    // vec1.clear();

    // check the overall size of a vector
    // int capacity;
    // capacity = vec1.capacity();
    // cout<< "The overall size of a vector "<<capacity<<endl;

    // Vector iterator
    vector<int>::iterator itr;
    // itr = vec1.begin();
    // itr = vec1.end() - 1;
    // cout<< "First element of a vector or vec1[0]: "<<*itr<<endl;
    // cout<< "Last element of a vector or vec1[3]: "<<*itr<<endl;

    // use iterator with for loop
    for (itr = vec1.begin(); itr != vec1.end(); ++itr)
    {
        cout << *itr << "  ";
    }
    cout << endl;

    // print vector using basic for-loop
    // for (int i = 0; i < vec1.size(); i++)
    // {
    //     cout<<vec1.at(i)<<" ";
    // }

    // print vector using ranged for-loop
    for (int &val : vec1)
    { // use &: it is memory efficient and its good practice
        cout << val << " ";
    }

    return 0;
}