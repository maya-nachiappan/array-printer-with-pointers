//
//  main.cpp
//  array printer with pointers
//
//  Created by maya nachiappan on 10/9/24.
//
#include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30};
    int length = sizeof(numbers) / sizeof(int);
    int* ptr = numbers + length - 1;
    for (int i = length - 1; i >= 0; --i) {
        cout << *(ptr - (length - 1 - i)) << " ";
    }
    cout << endl;
    return 0;
}
