/* Date: 23 - 03 - 2022
Author: Sailendra */

#include <iostream>
// #include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string st = "Sailendra";
    // cout<< st<<endl;

    st.push_back(' ');
    // cout<< st<<endl;

    st.append("Chettri");
    // cout<< st<<endl;

    // cout<<st[5]<<endl;
    
    // st.replace(position, replace, stringToReplace);
    // st.replace(9, 1, "~");
    // cout<<st<<endl;

    // st.erase(position, length);
    // st.erase(9, 1);
    // cout<<st<<endl;

    // st.substr(position = 0, length);
    // cout<<st.substr(9, 7)<<endl;
    // cout<< st.substr(2)<<endl; // starts form 0 - default pos = 0

    // reverse a string
    // reserve(st.begin(), st.end());
    // cout<< st<<endl;

    // sort
    // sort(st.begin(), st.end());
    // cout<<st<<endl;

    cout<< st<<endl;

    string s1 = "sai";
    string s2 = "sai";

    auto cmp = s1 == s2;
    cout<< "cmp: "<<cmp<<endl;

    // int pos = st.find("Chettri");
    // if(pos != string::npos){
    //     cout<< st.substr(10)<<endl; // from position 10 to end
    // } else {
    //     cout<< "Sub-string not found :("<<endl;
    // }
    
    
    


    return 0;
}