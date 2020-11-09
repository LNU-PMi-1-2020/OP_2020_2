#include <iostream>
using namespace std;

int main()
{
    unsigned int n, m;
    cout << "Enter n and m: ";
    cin >> n >> m;
    float* rows = new float[n];
    float* columns = new float[m];
    float arr[sizeof(rows)][sizeof(columns)]; // creating 2d array

    // entering 2d array values
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < m; k++) {
            cout << "Enter array " << i + 1 << " row and " << k + 1 << " column value: ";
            cin >> arr[i][k];
        }
    }

    float max = arr[0][0];
    float min = arr[0][0];
    float max_row_pos = 0;
    float max_col_pos = 0;
    float min_row_pos = 0;
    float min_col_pos = 0;

    // finding min and max array values
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < m; k++) {
            if (arr[i][k] > max) {
                max = arr[i][k];
                max_row_pos = i;
                max_col_pos = k;
            }
            if (arr[i][k] < min) {
                min = arr[i][k];
                min_row_pos = i;
                min_col_pos = k;
            }
            
        }
    }

    float min_sum = INFINITY;
    float max_sum = -INFINITY;
    float sum_1 = 0;
    float sum_2 = 0;
    float max_sum_row = 0;
    float min_sum_column = 0;

    // finding in an array min and max sum
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < m; k++) {

            sum_1 += arr[i][k];

            sum_2 += arr[k][i];
        }
        if (sum_1 > max_sum) {
            max_sum = sum_1;
            max_sum_row = i + 1;
        }
        if (sum_2 < min_sum) {
            min_sum = sum_2;
            min_sum_column = i + 1;
        }
        sum_1 = 0;
        sum_2 = 0;

    }

    // outputting min and max with their coordinates
    cout << "The min is: " << min << " it's index " << min_row_pos << " and " << min_col_pos << endl;
    cout << "The max is: " << max << " it's index " << max_row_pos << " and " << max_col_pos << endl;
    cout << "min column sum is: " << min_sum << " and it's column with index " << min_sum_column << endl;
    cout << "max row sum is: " << max_sum << " and it's row with index " << max_sum_row << endl;
    return 0;
}
