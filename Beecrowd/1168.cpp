#include <stdio.h>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<int, int> leds = {{1, 2},{2, 5},{3,5},{4,4},{5,5},{6,6},{7,3},{8,7},{9,6},{0,6}};
    int inpts, soma = 0;
    string varb;

    cin >> inpts;

    while (inpts != 0)
    {
        cin >> varb;
        for (int i = 0; i < varb.size(); i++)
        {
            soma += leds[(varb[i] - '0')];
        }
        cout << soma << " leds" << endl;
        soma = 0;
        inpts--;
    }

    return 0;
}
