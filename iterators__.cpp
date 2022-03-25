/* Date: 25 - 03 - 2022
Author: Sailendra */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    vec = {2, 3, 5, 6, 7};

    cout<< "Original vector: ";
    for(int i = 0; i < vec.size(); i++){
        cout<<vec.at(i)<<" ";
    }
    cout<<endl;

    // create and iterator
    // vector<int> :: iterator it; // instead of this line use 'auto' keyword in loop
    // it = vec.begin(); // points to first element
    // it = vec.end()-1; // points to last element

    // cout<<*it<<endl;
    // cout<<*(it+1)<<endl;
    // cout<<*(it+2)<<endl;

    // print vector using iterators
    // for(it = vec.begin(); it != vec.end(); ++it){
    //     cout<<*it<<" ";
    // }
    // cout<<endl;

    // ranged based loop
    // for(int &value : vec){
    //     value++;
    // }
    // for(int value : vec){
    //     cout<< value<<" ";
    // }

    // printing vector without delcaring iterator
    for(auto it = vec.begin(); it != vec.end(); ++it){
        cout<< *it<<" ";
    }
    cout<<endl;

    // auto and ranged based loop
    for(auto &val : vec){
        cout<< val<<" ";
    }
    cout<<endl;
    

    return 0;
}