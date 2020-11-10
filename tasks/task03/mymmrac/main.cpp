#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file;
    file.open("int.txt");
    int n;
    file >> n;
    int **nums = new int *[n];
    int *rowSizes = new int[n];

    for (int i = 0; i < n; ++i) {
        int k;
        file >> k;
        rowSizes[i] = k;
        nums[i] = new int[k];

        for (int j = 0; j < k; ++j) {
            file >> nums[i][j];
        }
    }

    file.close();

    for (int i = 0; i < n; ++i) {
        int rowMax = nums[i][0];
        int rowMin = nums[i][0];
        int rowSum = 0;
        int rowMul = 1;
        for (int j = 0; j < rowSizes[i]; ++j) {
            rowMax = max(nums[i][j], rowMax);
            rowMin = min(nums[i][j], rowMin);
            rowSum += nums[i][j];
            rowMul *= nums[i][j];
        }
        printf("Max: %d Min: %d Sum: %d Multiplication: %d\n", rowMax, rowMin, rowSum, rowMul);
    }

    for (int i = 0; i < n; ++i) {
        delete[] nums[i];
    }
    delete[] nums;
    delete[] rowSizes;
}