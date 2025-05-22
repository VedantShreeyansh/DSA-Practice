// Remove Duplicates from the Sorted Array and then print it 
#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;

    int k = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != nums[i+1]){
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
};

int main() {
    std::vector<int> nums = {1, 1, 2, 3, 3, 4, 5};
    int uniqueCount = removeDuplicates(nums);
    cout << "The number of unique elements is: " << uniqueCount << endl;
    cout << "The array after removing duplicates: ";
    for (int i = 0; i < uniqueCount; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}