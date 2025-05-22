// Find the possible number of triplet combinations summing upto the target 10
#include <iostream>

// Worst case complexity

int combinations(int arr[], int n, int target){
    int count = 0;
    
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            for (int k = j + 1; k < n; k++){
                if (arr[i] + arr[j] + arr[k] == target){
                    count += 1;
                }
            }
        }
    }
    
    return count;
}

int main() {
    // Write C++ code here
    int arr[] = {1, 2, 4, 5, 3, 7, 9};
    int target = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = combinations(arr, n, target);
    std::cout << "The possible number of combinations are: " << result << std::endl;
    return 0;
}