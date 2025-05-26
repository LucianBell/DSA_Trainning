#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// void bubble_sort_asc(vector<int> &p_data) {
//     int tmp;
    
//     for (int i = 0; i < (p_data.size() - 1); i++)
//     {
//         for (int j = 0; j < (p_data.size() - i - 1); j++)
//         {
//             if(p_data[j] > p_data[j + 1]) {
//                 tmp = p_data[j];
//                 p_data[j] = p_data[j + 1];
//                 p_data[j + 1] = tmp;
//             }
//         }
//     }
// }

// void bubble_sort_dsc(vector<int> &p_data) {
//     int tmp;
    
//     for (int i = 0; i < (p_data.size() - 1); i++)
//     {
//         for (int j = 0; j < (p_data.size() - i - 1); j++)
//         {
//             if(p_data[j] < p_data[j + 1]) {
//                 tmp = p_data[j];
//                 p_data[j] = p_data[j + 1];
//                 p_data[j + 1] = tmp;
//             }
//         }
//     }
// }

void print_results(const vector<int>& sorted_even, const vector<int>& sorted_odd) {
    int ptr_even = 0;
    int ptr_odd = 0;

    while (ptr_odd < sorted_odd.size()) {
        cout << sorted_odd[ptr_odd] << endl;
        ptr_odd++;
    }

    while (ptr_even < sorted_even.size()) {
        cout << sorted_even[ptr_even] << endl;
        ptr_even++;
    }

}

int main()
{
    int num_inputs, current_num;
    vector<int> data_even;
    vector<int> data_odd;

    cin >> num_inputs;

    for (int i = 0; i < num_inputs; i++)
    {
        cin >> current_num;
        if (current_num % 2 == 0)
        {
            data_even.push_back(current_num);
        } else {
            data_odd.push_back(current_num);
        }
    }
    
    sort(data_even.begin(), data_even.end());
    sort(data_odd.begin(), data_odd.end(), greater<int>());
    print_results(data_odd, data_even);

    return 0;
}
