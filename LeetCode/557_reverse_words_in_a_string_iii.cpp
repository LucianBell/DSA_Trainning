#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string s = "Let's take LeetCode contest";
    char *p1 = &s[0];
    char *p2 = &s[0];
    char aux;

    while (*p1 != '\0')
    {
        while (*p2 != ' ' && *p2 != '\0')
        {
            p2++;
        }
        
        char *start = p1;
        char *end = p2-1;
        
        while (start < end)
        {
            aux = *start;
            *start = *end;
            *end = aux;
            start++;
            end--;
        }

        if (*p2 == ' ')
        {
            p2++;
        }
        p1 = p2;
    }
    
    cout << s << endl;
    
    return 0;
}
