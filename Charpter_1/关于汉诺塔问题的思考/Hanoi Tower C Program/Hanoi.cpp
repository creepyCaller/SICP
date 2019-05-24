#include<iostream>
#include<cstdlib>
using namespace std;
typedef char Tower;
void hanoi(int *move_count, int count, Tower a, Tower b, Tower c);
int move(int *move_count, Tower a, Tower b);
int main(void) {
	int move_count = 0;
	hanoi(&move_count, 4, 'A', 'B', 'C');
	cout << "move_count = " << move_count << endl;
	return 0;
}

void hanoi(int *move_count, int count, Tower a, Tower b, Tower c) {
	if(count == 1) {
		move(move_count, a, c);
	} else {
		hanoi(move_count, count - 1, a, c, b);
		move(move_count, a, c);
		hanoi(move_count, count - 1, b, a, c);
	}
	return;
}

int move(int *move_count, Tower a, Tower b) {
	cout << "step" << ++(*move_count) << ": " << a << " -> " << b << endl;
	return *move_count;
}