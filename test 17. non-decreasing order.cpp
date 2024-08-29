#include <iostream>
#include <algorithm> 
using namespace std;
int main() {
    int arr[] = {-45, 78, 23, 89, -90};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    cout << "Sorted array in non-decreasing order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
