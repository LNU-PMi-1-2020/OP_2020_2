#include <iostream>
using namespace std;
int main() {
	int m, n;
	cout << "enter natural m" << endl;
	cin >> m;
	cout << "enter natural n" << endl;
	cin >> n;
	// оголошення матриці
	float** array = new float* [m]; // m рядків
	float* rsum = new float [m];
	float* csum = new float [m];
	for (int i = 0; i < m; i++)
		array[i] = new float[n]; // 5 стовпців
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; j++) {
			cout << "enter element[" << i + 1 << ";" << j + 1 << "]" << endl;;
			cin >> array[i][j];
			csum[j] = 0;
		};
		rsum[i] =0;
	};
	float max_array = array[0][0];
	float min_array=array[0][0];
	int rmax = 0;
	int cmax = 0;
	int rmin = 0;
	int cmin = 0;
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; j++) {
			if (max_array<array[i][j]) {
				max_array = array[i][j];
				rmax = i+1;
				cmax=j+1;
			};
			if (min_array > array[i][j]) {
				min_array = array[i][j];
				rmin = i + 1;
				cmin = j + 1;
			};
			rsum[i]+= array[i][j];
			csum[j] += array[i][j];
		};
	};
	float row_max = rsum[0];
	float column_min = csum[0];
	int row_max_index = 0;
	int column_min_index = 0;
	for (int i = 0; i < m; i++) {
		if (rsum[i] > row_max) {
			row_max = rsum[i];
			row_max_index = i;
		};
	};
	for (int i = 0; i < n; i++) {
		if (csum[i] < column_min) {
			column_min = csum[i];
			column_min_index = i;
		};
	};
	cout << "max element =" << max_array << "; index [" << rmax <<";"<<cmax<<"]"<< endl;
	cout << "min element =" << min_array << "; index [" << rmin << ";" << cmin << "]" << endl;
	cout << "row with max sum index=" << row_max_index+1 << endl;
	cout << "row with max sum:" << row_max_index << endl;


	for (int i = 0; i < n;++i) {
		cout << array[row_max_index][i] << " ";
	};

	cout << "column with min sum index=" << column_min_index << endl;
	cout << "column with max sum:" << column_min_index+1 << endl;

	for (int i = 0; i < m;i++) {
		cout << array[i][column_min_index] << " ";
	};


	for (int count = 0; count < m; count++)
		delete[] array[count];
	delete[] rsum, csum;
}