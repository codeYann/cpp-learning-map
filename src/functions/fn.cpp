#include <stdlib.h>
#include <iostream>
using namespace std;

void do_something(string message) {
	cout << message << endl;
}

void wrapper(string message, void (*fn)(string content)) {
	fn(message);
}

int main (int argc, char **argv) {
	string message = "😲";
	wrapper(message, &do_something);
}