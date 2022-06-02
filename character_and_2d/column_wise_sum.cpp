#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int arr[10][10];

    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            cin >> arr[i][j]; 
        }
    }

    for (int col = 0; col < n; col++) {
        int s = 0;
        for (int row = 0; row < m; row++) {
            s += arr[row][col];
        }
        cout << s << ' ';
    }
}