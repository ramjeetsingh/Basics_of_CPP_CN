#include <iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr[]){
    int i = 0;int j = 0;int k = 0;

    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            arr[k] = arr1[i];
            i++;
            k++;
        } else {
            arr[k] = arr2[j];
            j++;
            k++;
        }
    }

    while (i < n) {
        arr[k] = arr1[i];
        i++;
        k++;
    }

    while (j < m) {
        arr[k] = arr2[j];
        j++;
        k++;
    }

}

int main() {
    int t;
    cin >> t;

    for (int q = 0; q < t; q++) {
        int n;
        cin >> n;
        int arr1[10];
        for (int i = 0; i < n; i++){
            cin >> arr1[i];
        }

        int m;
        cin >> m;
        int arr2[10];
        for (int i = 0; i <n; i++) {
            cin >> arr2[i];
        }

        int merged[100];

        merge(arr1, n, arr2, m, merged);

        for (int i = 0; i < (n+m); i++) {
            cout << merged[i] << " ";
        }
        cout << endl;
    }
}