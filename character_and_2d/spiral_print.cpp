#include <iostream>
using namespace std;

void spiralPrint(int input[][10], int row, int col){
    int i, k = 0, l = 0; 
    while (k < row && l < col) { 
        for (i = l; i < col; i++) { 
            cout << input[k][i] << " "; 
        } 
        k++; 
  
        for (i = k; i < row; i++) { 
            cout << input[i][col - 1] << " "; 
        } 
        col--; 
  
        if (k < row){ 
            for (i = col - 1; i >= l; i--) { 
                cout << input[row - 1][i] << " "; 
            } 
            row--; 
        } 
  
        if (l < col){ 
            for (i = row - 1; i >= k; i--) { 
                cout << input[i][l] << " "; 
            } 
            l++; 
        } 
    } 
}

int main() {
    int t;
    cin >> t;

    for (int q = 0; q < t; q++){
        int n, m;
        cin >> n >> m;

        int arr[10][10];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }

        spiralPrint(arr, n, m);
    }
}