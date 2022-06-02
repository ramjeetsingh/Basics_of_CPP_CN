#include <iostream>
using namespace std;

void selsort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min_ind = i;
        for (int j = i; j < n; j++) {
            if (arr[j] < arr[min_ind]) {
                min_ind = j;
            }
        }
        int temp = arr[min_ind];
        arr[min_ind] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n;
    cin >> n;

    int arr[10];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selsort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}