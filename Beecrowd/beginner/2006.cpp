#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int correct, current, count = 0;
    cin >> correct;

    for (int i = 0; i < 5; i++)
    {
        cin >> current;
        if (current == correct)
        {
            count++;
        }
    }
    cout << count << endl;
    
    return 0;
}
