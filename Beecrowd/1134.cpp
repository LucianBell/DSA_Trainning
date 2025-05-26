#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int input_us = -1;
    int meu_array[3] =  {};
    
    while (input_us != 4)
    {
        cin >> input_us;
        if (input_us < 4 && input_us > 0)
        {
            meu_array[(input_us-1)] += 1;
        }
    }
    
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << meu_array[0] << endl;
    cout << "Gasolina: " << meu_array[1] << endl;
    cout << "Diesel: " << meu_array[2] << endl;

    return 0;
}