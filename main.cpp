#include <iostream>

using namespace std;

int main() {
cout<< "hello this is ";

union Endian {unsigned  char c[4] ; unsigned  int i ;};
Endian e;
  e.i  = 0XAABBCCDD;

        if (e.c[0] == 0XAA)
        {
            cout << "Big Endian" << endl;
        }
        else {
            cout << "Little Endian" << endl;

        }

    return 0;
}