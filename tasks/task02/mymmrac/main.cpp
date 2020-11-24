#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, m;
    cout << "Enter n, m" << endl;
    cin >> n >> m;

    double a[n][m];
    cout << "Enter matrix" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    cout << endl;

    double minA = a[0][0];
    double maxA = a[0][0];
    double sumC[n];
    double sumR[m];

    for (int i = 0; i < n; i++) {
        sumC[i] = 0;
    }
    for (int i = 0; i < m; i++) {
        sumR[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            maxA = max(maxA, a[i][j]);
            minA = min(minA, a[i][j]);

            sumC[i] += a[i][j];
            sumR[j] += a[i][j];
        }
    }

    int maxRInd = 0;
    int minCInd = 0;

    for (int i = 0; i < n; i++) {
        maxRInd = sumC[maxRInd] < sumC[i] ? i : maxRInd;
    }

    for (int i = 0; i < m; i++) {
        minCInd = sumC[minCInd] > sumC[i] ? i : minCInd;
    }

    cout << "Max: " << maxA << endl;
    cout << "Min: " << minA << endl;

    cout << "Max sum row: " << maxRInd << endl;
    for (int i = 0; i < m; i++) {
        cout << a[maxRInd][i] << " ";
    }

    cout << endl << "Min sum column: " << minCInd << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i][minCInd] << " ";
    }

    cout << endl;

}