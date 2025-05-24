// Convert Roman to Integer

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int romanToInt(string str){
    int ans = 0;
    unordered_map<char, int> mp{
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    for (int i = 0; i < str.size(); i++) {
        // Check if the current value is less than the next value
        if (i + 1 < str.size() && mp[str[i]] < mp[str[i + 1]]) {
            ans -= mp[str[i]]; // Subtract the current value
        } else {
            ans += mp[str[i]]; // Add the current value
        }
    }
    return ans;
}

int main(){
    string str = "XIV"; // Use a valid Roman numeral
    // romanToInt(str); // Removed redundant call
    cout << "The Roman to Integer will be: " << romanToInt(str) << endl;
    return 0;
}