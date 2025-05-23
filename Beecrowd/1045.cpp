#include <stdio.h>
#include <iostream>
#include <vector>
#include <array>

using namespace std;

void descending_order(array<double, 3> &arr) {
    double *ptr_bgn = &arr[0];
    double *ptr_end = &arr[2];
    double aux;

    while (ptr_bgn < ptr_end)
    {
        if (*ptr_bgn < *ptr_end)
        {
            aux = *ptr_end;
            *ptr_end = *ptr_bgn;
            *ptr_bgn = aux;
        }

        ptr_bgn++;    
    }

}


int main()
{
    double a,b,c;
    cin >> a >> b >> c;
    array<double, 3> sides = {a,b,c};

    descending_order(sides);
    for (int i: sides) {
        cout << i << "\t";
    }

    return 0;
}