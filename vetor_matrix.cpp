#include <iostream>
#include <vector>

using namespace std;

void input(vector<vector<int>>& matrix, int row, int column) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << "요소 [" << i << "][" << j << "] 입력: ";
            cin >> matrix[i][j];
        }
    }
}

void output(const vector<vector<int>>& matrix, int row, int column) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
