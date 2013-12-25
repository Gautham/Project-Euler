#include <iostream>
using namespace std;

int Sum(int n) {
	return n * (n + 1) / 2;
}

int SumSquares(int n) {
	return n * (n + 1) * (2 * n + 1) / 6;
}

int main() {
	long t = Sum(100);
	cout<<t * t - SumSquares(100);
}