#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> n >> m;

    int arr[10][10];

    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            cin >> arr[i][j]; 
        }
    }

    for (int row = 0; row < n; row++) {
        for (int times = 0; times < n-row; times++) {
            for (int j = 0; j < m; j++) {
                cout << arr[row][j] << ' ';
            }
            cout << endl;
        }
    }
}