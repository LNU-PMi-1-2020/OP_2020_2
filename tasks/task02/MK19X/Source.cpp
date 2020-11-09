#include <iostream>
using namespace std;
int main() {
	int m, n;
	cout << "enter natural m" << endl;
	cin >> m;
	cout << "enter natural n" << endl;
	cin >> n;
	float** array = new float*[m];
	for (int i = 0; i < m; i++)
		array[i] = new float[n];
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; j++) {
			cout << "enter element[" << i + 1 << ";" << j + 1 << "]" << endl;;
			cin >> array[i][j];
		}
	}
	float max_array = array[0][0];
	float min_array = array[0][0];
	int fmax = 0;
	int smax = 0;
	int fmin = 0;
	int smin = 0;
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; j++) {
			if (max_array<array[i][j]) {
				max_array = array[i][j];
				fmax = i + 1;
				smax = j + 1;
			}
			if (min_array > array[i][j]) {
				min_array = array[i][j];
				fmin = i + 1;
				smin = j + 1;
			}
		}
	}
	cout << "max element =" << max_array << "; index [" << fmax << ";" << smax << "]" << endl;
	cout << "min element =" << min_array << "; index [" << fmin << ";" << smin << "]" << endl;
	// It is all that I can do because I do not know how to deal  with  index  of raws and colums with max/min array
	system("pause");
}