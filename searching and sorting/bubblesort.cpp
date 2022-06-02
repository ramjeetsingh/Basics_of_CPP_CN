#include <iostream>
using namespace std;

void sort(int arr[], int n) {
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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

        sort(arr, n);
        for (int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
