#include <iostream>
using namespace std;

int lengthOfLastWord(string str){
    int length = 0;
    bool counting = false;

    for (int i = str.length() - 1; i >= 0; i--){
        if (str[i] != ' '){
            counting = true;
            length++;
        }
        else if (counting) {
            break;
        }
    }
    return length;
};

int main(){
    std::string str = "Hello Amita";
    std::cout << "Length of String: " << lengthOfLastWord(str) << endl;
    return 0;
}