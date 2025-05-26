#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void find_result(vector<pair<int, int>> &p_data, int target) {
    pair<int, int> *p1 = &p_data[0];                           
    pair<int, int> *p2 = &p_data[p_data.size() - 1];            
    while (p1 < p2) {
        int sum = p1->first + p2->first;

        if (sum == target) {
            int i1 = p1->second;
            int i2 = p2->second;
            cout << "[" << min(i1, i2) << "," << max(i1, i2) << "]" << endl;
            return;
        } else if (sum < target) {
            p1++;
        } else {
            p2--;
        }
    }

    cout << "No result found." << endl;
}

int main() {
    int target, num_inputs, current;
    cin >> target >> num_inputs;

    vector<pair<int, int>> data;

    for (int i = 0; i < num_inputs; i++) {
        cin >> current;
        data.push_back({current, i}); 
    }

    sort(data.begin(), data.end());

    find_result(data, target);

    return 0;
}
