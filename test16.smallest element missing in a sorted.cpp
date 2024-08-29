#include <iostream>
#include <vector>
using namespace std;
int findSmallestMissingElement(const vector<int>& arr) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] != mid + 1) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return low + 1;
}
int main() {
    vector<int> arr = {1, 3, 4, 5, 6};
    int result = findSmallestMissingElement(arr);
    cout << "The smallest missing element is: " << result << endl;
    return 0;
}
