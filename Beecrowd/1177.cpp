#include <stdio.h>
#include <iostream>
using namespace std;

const int ARR_SIZE = 1000;

int main() {
    int T, K = 0;
    int my_array[ARR_SIZE] = {};

    cin >> T;

    for (int i = 0; i < ARR_SIZE; i++) {
        if (K == T)
        {
            K = 0;
        }
        my_array[i] = K;
        K++;
        cout << "N[" << i << "] = " << my_array[i] << endl;
    }

    return 0;
}