#include <iostream>
using namespace std;

long getMaxPalindrome() {
	long t = 0;
	for (int i = 9; i > 0; --i)
		for (int j = 9; j >= 0; --j)
			for (int k = 9; k >= 0; --k) {
				t = 100001 * i + 10010 * j + 1100 * k;
				for (int p = 990; p > 700; p -= 11) if (t % p == 0 && t / p < 1000) return t;
			}
}

int main() {
	cout<<getMaxPalindrome();
}