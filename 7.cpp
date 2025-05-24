#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
    for (int i = 0; i < n; i++){
        nums1[m + i] = nums2[i];
    }

    sort(nums1.begin(), nums1.end());
};

int main(){
    vector<int> nums1 = { 1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {3, 4, 5};

    int m = 3;
    int n = nums2.size();

    merge(nums1, m, nums2, n);

    for (int num : nums1) {
        cout << num << endl;
    }

    return 0;
}