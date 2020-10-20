#include<iostream>
using namespace std;
int main() {
	int m1[] = { 1, 2, 3, 4, 5, 9 , 10, 11, 12, 13 };
	int m2[] = { 1, 2, 5, 6, 9, 10, 12, 14, 15, 16 };
	int m3[20];
	int i=0 , j=0, k=0;
	while (i <= 20) {
		if (m1[j] < m2[k] && j < 10) {
			m3[i] = m1[j];
			j++;
		}
		else if (m2[k] < m1[j] && k < 10) {
			m3[i] = m2[k];
			k++;
		}
		else if(j<10&&k<10){
			m3[i] = m1[j];
		m3[i + 1] = m2[k];
		k++;
		j++;
		i++;
	}
		else if (j == 10) {
			for (; k < 10; k++) {
				m3[i] = m2[k];
				i++;
			}
		}
		else{
			for (; j < 10; j++) {
				m3[i] = m1[j];
				i++;
			}
		}
		i++;
	}
	for (i = 0; i < 20; i++) {
		cout << m3[i] << " ";
	}
	int l;
	cin >> l;
}