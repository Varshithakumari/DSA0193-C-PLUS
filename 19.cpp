#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int start = 0;

    cout << "Enter a string: ";
    cin >> str;

    int end = str.length() - 1;
    bool isPalindrome = true;

    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}
