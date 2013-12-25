#include <iostream>
#include <fstream>
using namespace std;

int main() {
	long A[20][20], i, j, t, max = 0;
	ifstream f;
	f.open("11.txt");
	for (i = 0; i < 20; ++i)
		for (j = 0; j < 20; ++j) f>>A[i][j];
	for (i = 0; i < 20; ++i)
		for (j = 0; j < 20; ++j) {
			if (i < 17) {
				t = A[i][j] * A[i + 1][j] * A[i + 2][j] * A[i + 3][j];
				if (t > max) max = t;
			}
			if (j < 17) {
				t = A[i][j] * A[i][j + 1] * A[i][j + 2] * A[i][j + 3];
				if (t > max) max = t;				
			}
			if (i < 17 && j < 17) {
				t = A[i][j] * A[i + 1][j + 1] * A[i + 2][j + 2] * A[i + 3][j + 3];
				if (t > max) max = t;				
			}
			if (i < 17 && j > 2) {
				t = A[i][j] * A[i + 1][j - 1] * A[i + 2][j - 2] * A[i + 3][j - 3];
				if (t > max) max = t;				
			}
		}
	cout<<max;
}