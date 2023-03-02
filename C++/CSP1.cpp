#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> a) {
    map<int, int> mp;
    mp[0]=0;
    mp[1]=0;
    mp[2]=0;
    mp[3]=0;
    mp[4]=0;
    mp[5]=0;
    mp[6]=0;
    mp[7]=0;
    mp[8]=0;
    mp[9]=0;
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < 10) {
            mp[a[i]] += 1;
        }
        else {
            int x = floor(a[i]/10);
            int y = a[i]%10;
            mp[x] += 1;
            mp[y] += 1;
        }
    }
    
    int max = 0;
    for (auto it : mp) {
        max = std::max(max, it.second);
    }
    
    vector<int> ans;
    
    for (auto it : mp) {
        if (it.second == max) {
            ans.push_back(it.first);
        }
    }

    return ans;
}

/*
Given an array of integers a, your task is to calculate the digits that occur the most number of times in the array. Return the array of these digits in ascending order.

Example

For a = [25, 2, 3, 57, 38, 41], the output should be solution(a) = [2, 3, 5].

Here are the number of times each digit appears in the array:

0 -> 0
1 -> 1
2 -> 2
3 -> 2
4 -> 1
5 -> 2
6 -> 0
7 -> 1
8 -> 1
The most number of times any number occurs in the array is 2, and the digits which appear 2 times are 2, 3 and 5. So the answer is [2, 3, 5].

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.integer a

An array of positive integers.

Guaranteed constraints:
1 ≤ a.length ≤ 103,
1 ≤ a[i] < 100.

[output] array.integer

The array of most frequently occurring digits, sorted in ascending order.
*/