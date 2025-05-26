#include <stdio.h>
#include <iostream>
#include <vector>
#include <array>
#include <cmath>

using namespace std;

void descending_order(array<double, 3> &arr) {
    double* p1 = &arr[0];
    double* p2 = &arr[2];

    if (*p1 < *p2) swap(*p1, *p2);
    if (arr[1] > arr[0]) swap(arr[1], arr[0]);
    if (arr[1] < arr[2]) swap(arr[1], arr[2]);
}


void checking(array<double, 3> &arr) {
    double A = arr[0];
    double B = arr[1];
    double C = arr[2];

    if (A >= (B + C)) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        double A2 = pow(A, 2);
        double B2 = pow(B, 2);
        double C2 = pow(C, 2);

        if (A2 == B2 + C2) {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if (A2 > B2 + C2) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if (A2 < B2 + C2) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }

        if (A == B && B == C) {
            cout << "TRIANGULO EQUILATERO" << endl;
        } else if (A == B || A == C || B == C) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
}

int main()
{
    double a,b,c;
    cin >> a >> b >> c;
    array<double, 3> sides = {a,b,c};

    descending_order(sides);
    checking(sides);

    return 0;
}