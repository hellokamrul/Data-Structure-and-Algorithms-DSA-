#include <iostream>
using namespace std;

void reverseArray(int arr[], int sz) {
    int start = 0, ed = sz - 1;

    while (start < ed) {
        swap(arr[start], arr[ed]);
        start++;
        ed--;
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    reverseArray(arr, 5);

    cout << "Reversed Array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
