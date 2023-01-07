#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  bool prep = ((true and false) and (true and false) or (true or false) or
               (true or true));

  if (prep) {
    cout << "Yes sir. This is my prep" << endl;
    return 0;
  }

  cout << "No sir. this is not my prep" << endl;

  return 0;
}