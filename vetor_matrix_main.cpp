#include <iostream>
#include <vector>

using namespace std;

void input(vector<vector<int>>& matrix, int row, int column);
void output(const vector<vector<int>>& matrix, int row, int column);

int main() {
    int row, column;

    cout << "행렬의 행과 열의 개수를 입력: ";
    cin >> row >> column;

    vector<vector<int>> ptr1(row, vector<int>(column));
    vector<vector<int>> ptr2(row, vector<int>(column));
    vector<vector<int>> result(row, vector<int>(column));

    cout << "첫 번째 행렬의 요소 입력:\n";
    input(ptr1, row, column);

    cout << "두 번째 행렬의 요소 입력:\n";
    input(ptr2, row, column);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            result[i][j] = ptr1[i][j] + ptr2[i][j];
        }
    }

    cout << "두 행렬의 덧셈 결과:\n";
    output(result, row, column);

    return 0;
}
