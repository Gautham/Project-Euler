#include <iostream>
using namespace std;


int main() {
	int S = 2, p = 3, q = 5, r = 8;
	while (r < 4000000) {
		S += r;
		p = q + r;
		q = p + r;
		r = p + q;
	}
	cout<<S;
}