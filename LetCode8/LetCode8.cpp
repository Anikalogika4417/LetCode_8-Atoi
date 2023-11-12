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

        for (int i = 0; i < s.size(); i++) {
            if (my_map.find(s[i]) != my_map.end()) {

            }
        }
    }
};

int main()
{
    std::cout << "Hello World!\n";
}

