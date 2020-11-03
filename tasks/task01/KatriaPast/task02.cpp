#include <iostream>
using namespace std;
int main() {
	/// declare an array
	const int width = 3, height = 3;
	int numbers[height][width];
	/// fill the array
	for (int i = 0; i < height; i++) {
		cout << "Enter " << i + 1 << " row" << endl;
		for (int j = 0; j < width; j++) {
			cin >> numbers[i][j];
		}
	}
	/// output the array
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			cout << numbers[i][j] << " ";
		}
		cout << endl;
	}
	/// find max number & index
	unsigned Max = 0;
	unsigned xM = 0;
	unsigned yM = 0;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (numbers[i][j] > Max) {
				Max = numbers[i][j];
				xM = i+1;
				yM = j+1;
			}
			else continue;
		}
	}
	cout << "Max number = " << Max << " (" << xM << "," << yM << ")" << endl;
	/// find min number & index
	unsigned min = Max;
	unsigned xm = 0;
	unsigned ym = 0;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (numbers[i][j] < min) {
				min = numbers[i][j];
				xm = i + 1;
				ym = j + 1;
			}
			else continue;
		}
	}
	cout << "Min number = " << min << " (" << xm << "," << ym << ")" << endl;
	/// find a raw with max sum
	unsigned MaxRaw = 0;
	unsigned MaxRawT = 0;
	unsigned xMr = 0;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			MaxRawT += numbers[i][j]; 
		}
		if (MaxRawT > MaxRaw) {
			MaxRaw = MaxRawT;
			xMr = i;
			MaxRawT = 0;
		}
		else {
			MaxRawT = 0;
			continue;
		}

	}
	cout << "Max Raw: " << endl;
	for (int j = 0; j < width; j++) {
		cout << numbers[xMr][j]<<" ";
	}
	cout << endl << "Max Raw ("<<xMr+1<<") Sum = " << MaxRaw << endl;
	/// find a column with min sum
	unsigned mincol = 0;
	unsigned mincolT = 0;
	unsigned ymc = 0;
	for (int j = 0; j < width; j++) {
		for (int i = 0; i < height ; i++) {
			mincolT += numbers[i][j];
		}
		if (mincolT > mincol) {
			mincol = mincolT;
			ymc = j;
			mincolT = 0;
		}
		else {
			mincolT = 0;
			continue;
		}

	}
	cout << "Min Column: " << endl;
	for (int i = 0; i < height; i++) {
		cout << numbers[ymc][i] << endl;
	}
	cout << endl << "Min Column (" << ymc + 1 << ") Sum = " << mincol << endl;
	
}