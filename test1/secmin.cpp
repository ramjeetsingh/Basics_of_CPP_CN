#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[10];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = INT_MIN;
    int sec_largest = INT_MIN;

    for (int i = 0; i < n; i++){
        if (arr[i] > largest) {
            sec_largest = largest;
            largest = arr[i];
        } else {
            if (arr[i] > sec_largest && arr[i] < largest) {
                sec_largest = arr[i];
            }
        }
    }
    cout << sec_largest;
}