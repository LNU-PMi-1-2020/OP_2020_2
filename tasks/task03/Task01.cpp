#include <iostream>
#include <fstream> //works with files
using namespace std;

int main()
{
    ifstream file;
    file.open("int.txt");
    int r;
    file >> r;
    cout << "r= " << r << endl;

    int** myarray = new int* [r];
    int* rowsize = new int [r];

    for (int i = 0; i < r; i++) {
        int n;
        file >> n;
        rowsize[i] = n;
        myarray[i] = new int[n];
        for (int j = 0; j < n; j++) {
            file >> myarray[i][j];
        }
    }
    file.close();
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < rowsize[i]; j++) {
            cout << myarray[i][j] << "\t";
        }
        cout << endl;
    }
    
    for (int i = 0; i < r; i++) {
        int max_el = myarray[i][0];
        for (int j = 0; j < rowsize[i]; j++) {
            if (max_el > myarray[i][j + 1]) {
                continue;
            }
            else {
                max_el = myarray[i][j + 1];
            }
        }
        cout << "Max number in " << i + 1 << " string is: " << max_el << endl;
    }

    for (int i = 0; i < r; i++) {
        size_t min_el = myarray[i][0];
        for (int j = 0; j < rowsize[i]; j++) {
            if (min_el < myarray[i][j + 1]) {
                continue;
            }
            else {
                min_el = myarray[i][j + 1];
            }
        }
        cout << "Min number in " << i + 1 << " string is: " << min_el << endl;
    }
    
    for (int i = 0; i < r; i++) {
        int k = 0;
        for (int j = 0; j < rowsize[i]; j++) {
            k += myarray[i][j];
        }
        cout << "The sum of elements in " << i + 1 << " string is: " << k << endl;
    }

    for (int i = 0; i < r; i++) {
        int k = 1;
        for (int j = 0; j < rowsize[i]; j++) {
            k *= myarray[i][j];
        }
        cout << "The multiplication of elements in " << i + 1 << " string is: " << k << endl;
    }

    system("pause");
    return 0;
}


