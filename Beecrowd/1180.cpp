#include <stdio.h>
#include <iostream> 

using namespace std;

int main() {
    int N;
    cin >> N;
    
    int X[N] = {};
    int R[2] = {};

    for (int i = 0; i < N; i++)
    {
        cin >> X[i];
        if (X[i] < R[0] || i == 0)
        {
            R[0] = X[i];
            R[1] = i;
        }
        
    }
    
    cout << "Menor valor: " << R[0] << endl;
    cout << "Posicao: " << R[1] << endl;

    return 0;
}