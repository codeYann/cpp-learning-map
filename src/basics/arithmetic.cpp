#include <iostream>

using namespace std;

int main(int argc, char **argv) {
	int a = 10;
	a += 15;
	cout << a << endl;

	a -= 45;
	cout << a << endl;

	a %= -4;
	cout << a << endl;
	return 0;
}