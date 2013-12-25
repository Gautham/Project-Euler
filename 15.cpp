#include <iostream>
using namespace std;

int main() {
	long long t = 1;
	int i = 21, p = 2;
	for (int i = 21; i <= 40; ++i) {
		t *= i;
		while (p <= 20  && t % p == 0) t /= p++;
	}
	cout<<t;
}