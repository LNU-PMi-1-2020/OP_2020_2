#include <iostream>

using namespace std;

int main() {
    int n, m;
    cout << "Enter n, m" << endl;
    cin >> n >> m;

    float array[n][m];

    cout << "Enter matrix" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> array[i][j];
        }
    }

    cout << endl;

    float maxArray = array[0][0];
    float minArray = array[0][0];
    float sumColumn[n];
    float sumRow[m];

    for (int i = 0; i < n; i++) {
        sumColumn[i] = 0;
    }
    for (int i = 0; i < m; i++) {
        sumRow[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            maxArray = max(maxArray, array[i][j]);
            minArray = min(minArray, array[i][j]);
            sumColumn[i] += array[i][j];
            sumRow[j] += array[i][j];
        }
    }

    int max_row_index = 0;
    int min_column_index = 0;

    for (int i = 0; i < n; i++) {
        max_row_index = sumColumn[max_row_index] < sumColumn[i] ? i : max_row_index;
    }

    for (int i = 0; i < m; i++) {
        min_column_index = sumColumn[min_column_index] > sumColumn[i] ? i : min_column_index;
    }

    cout << "Max element: " << maxArray << endl;
    cout << "Min element: " << minArray << endl;
    cout << "Max sum row: " << max_row_index << endl;

    for (int i = 0; i < m; i++) {
        cout << array[max_row_index][i] << " ";
    }

    cout << endl << "Min sum column: " << min_column_index << endl;

    for (int i = 0; i < n; i++) {
        cout << array[i][min_column_index] << " ";
    }
    cout << endl;
}