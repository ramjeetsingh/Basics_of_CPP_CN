#include <iostream>
using namespace std;

void in_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i-1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main() {
    int t;
    cin >> t;

    for (int q =0; q < t; q++) {
        int n;
        cin >> n;

        int arr[100];

        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        in_sort(arr, n);

        for (int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}