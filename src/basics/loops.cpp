#include <iostream>
using namespace std;

typedef struct {
  string name;
  string nickname;
  float height;
} Person;

int main(int argc, char **argv) {
  Person list_of_persons[2] = {{"john doe", "jon snow", 1.92},
                               {"doe john", "jon sand", 1.75}};

  // Foreach in cpp
  for (Person p : list_of_persons) {
    cout << p.name << p.nickname << p.height << endl;
  }

  return 0;
}