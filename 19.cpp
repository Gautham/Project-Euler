#include <iostream>
using namespace std;


int Days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };



int main() {
	int i, j, day = 2, count = 0;
	for (i = 1; i <= 100; ++i) {
		for (j = 0; j < 12; ++j) {
			if (!day) ++count;
			day += Days[j];
			if (j == 1 && i % 4 == 0) ++day;
			day %= 7;
		}
	}
	cout<<count;
}