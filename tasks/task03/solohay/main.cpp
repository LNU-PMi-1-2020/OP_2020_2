#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file;
    file.open("int.txt");
    int r;
    file >> r;
    int** myarray = new int* [r];
    int* rowSize = new int[r];

    for (int i = 0; i < r; i++) {
        int n;
        file >> n;
        rowSize[i] = n;
        myarray[i] = new int[n];

        for (int j = 0; j < n; j++) {
            file >> myarray[i][j];
        }
    }

    file.close();

    for (int i = 0; i < r; i++) {
        int rowMax = myarray[i][0];
        int rowMin = myarray[i][0];
        int rowSum = 0;
        int rowMul = 1;
        for (int j = 0; j < rowSize[i]; j++) {
            rowMax = max(myarray[i][j], rowMax);
            rowMin = min(myarray[i][j], rowMin);
            rowSum += myarray[i][j];
            rowMul *= myarray[i][j];
        }
        printf("Max: %d Min: %d Sum: %d Multiplication: %d\n", rowMax, rowMin, rowSum, rowMul);
    }

    for (int i = 0; i < r; i++) {
        delete[] myarray[i];
    }
    delete[] myarray;
    delete[] rowSize;
}