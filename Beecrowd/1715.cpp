#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int players, matches, result, checked;
    cin >> players >> matches;
    result = players;

    int arr_pl[matches];

    for (int i = 0; i < players; i++)
    {
        for (int j = 0; j < matches; j++)
        {
            cin >> arr_pl[j];
            if (arr_pl[j] == 0 && checked == 0) {
                result--;
                checked = 1;
            }
        }
        checked = 0;
    }
    
    cout << result << endl;

    return 0;
}
