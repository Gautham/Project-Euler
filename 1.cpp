#include <iostream>
using namespace std;

int Sum(int p, int q) {
	int n = q / p;
	return n * (n + 1) * p / 2;
}

int main() {
	cout<<Sum(3, 999) + Sum(5, 999) - Sum(15, 999);
}