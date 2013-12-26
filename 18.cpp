#include <iostream>
#include <fstream>
using namespace std;




int main() {
	ifstream f;
	f.open("18.txt");
	int A[15][15][2], i, j;
	for (i = 0; i < 15; ++i)
		for (j = 0; j <= i; ++j) {
			f>>A[i][j][0];
			A[i][j][1] = A[i][j][0];
		}
	for (i = 13; i >=0; --i)
		for (j = 0; j <= i; ++j) A[i][j][1] += max(A[i+1][j][1], A[i+1][j+1][1]);
	cout<<A[12][8][1];
}