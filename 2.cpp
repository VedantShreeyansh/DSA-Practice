#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int k = 0;
    for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
    }
    return k;
}

int main(){
    std::vector<int> nums = {3, 4, 2, 2, 1, 5};
    int val = 2;
    cout << "The number of elements not equal to val will be: " << removeElement(nums, val) << endl;
    return 0;
}