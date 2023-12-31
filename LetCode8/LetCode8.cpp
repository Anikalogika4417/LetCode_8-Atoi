// LetCode8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        map<char, int> my_map{};
        string res;
        my_map['0'] = 0;
        my_map['1'] = 1;
        my_map['2'] = 2;
        my_map['3'] = 3;
        my_map['4'] = 4;
        my_map['5'] = 5;
        my_map['6'] = 6;
        my_map['7'] = 7;
        my_map['8'] = 8;
        my_map['9'] = 9;

        int index = 0;
        for (index; index < s.size(); index++) {
            if (my_map.find(s[index]) != my_map.end()) {
                break;
            }
        }

        for (int i = index; i < s.size(); i++) {
            if (my_map.find(s[i]) != my_map.end()) {
                res.push_back(s[i]);
            }
            else {
                break;
            }
        }
        short sign = 1;
        if (index > 0) {
            sign = s[index - 1] == '-' ? -1 : 1;
        }

        try {
            return stoi(res)*sign;
        } catch (const std::exception& e) {
            return 0;
        }
    }
};

int main()
{
    Solution test;
    cout << test.myAtoi("word");
}

