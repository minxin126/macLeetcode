//
// Created by minx wang on 2020/12/6.
//

#include "repeatString001.h"
#include<iostream>
#include "string"
#include "vector"
using namespace std;

int lengthofLongestSubstring(string s){
    //i have to use map or vector to finish of it.
//i have to use double cycle to compare the string of it.
    //string s;
    while (cin>>s){
        vector<string> saveString;
        for (int i = 0; i <s.size() ; ++i) {
            saveString.push_back(s.substr(i));//to save the string in it.

        }
        return saveString;
    }

}
int mainold()
{

    string s;
cout<<<lengthofLongestSubstring(s);

}
