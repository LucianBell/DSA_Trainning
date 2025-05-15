#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
 
int main() {
    vector<int> matrixes_order;
    int order_var = 1;

    while (order_var != 0)
    {
        cin >> order_var;
        matrixes_order.push_back(order_var);
    }

    for(int ord: matrixes_order) {
        int numero_atu = 1;
        int numero_inic = 1;
        for (int i = 0; i < ord; i++)
        {
            for (int j = 0; j < ord; j++)
            {
                cout << numero_atu << "\t";
                numero_atu = numero_atu * 2;
            }
            cout << endl;
            numero_inic = numero_inic * 2;
            numero_atu = numero_inic;             
        }
        cout << "\n"; 
    }

    return 0;
}