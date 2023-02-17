// Remove Duplicates from Sorted Array
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    int len = nums.size();
    int k = 1;
    for (int i = 1; i < len; i++) {
        if (nums[i] == nums[i - 1]) {
            nums[i - 1] = 200;
        }
        else
            k++;
    }
    sort(nums.begin(), nums.end());

    return k;
}

int main()
{
     
    int nums[] = {0,0,1,1,1,2,2,3,3,4}; // The input array
    vector<int> n(nums, nums + sizeof(nums)/sizeof(int));

    auto result = removeDuplicates(n); // Calls your implementation

    cout << "Result = " << result << endl; // Prints the result
    return 0;
}