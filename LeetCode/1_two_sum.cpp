#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void find_result(vector<pair<int, int>> &p_data, int target) {
    // p1 aponta para o início enquanto p2 aponta para o fim do vetor ordenado
    pair<int, int> *p1 = &p_data[0];                           
    pair<int, int> *p2 = &p_data[p_data.size() - 1];            

    // Loop que só é interrompido quando p1 e p2 tiverem o mesmo valor (apontarem para o mesmo lugar)
    while (p1 < p2) {
        // Soma os dois valores apontados
        int sum = p1->first + p2->first;

        /*
            Verifica se a soma é igual ao target. Se não for, verifica se a soma foi menor que o target (nesse caso,
            precisamos ter um número maior, então aumentamos o p1 para apontar para um número maior no vetor ordenado)
            e, caso contrário, se foi maior que o target (nesse caso precisamos ter um número menor, então o p2 é diminuido para apontar
            para um número menor no vetor)
        */
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

    // Vetor com número (first) e índice original
    vector<pair<int, int>> data;

    // Loop para inserir dados no vetor
    for (int i = 0; i < num_inputs; i++) {
        cin >> current;
        data.push_back({current, i}); 
    }

    // Vetor ordenado pois, na aplicação da técnica de dois ponteiros para soma de dois valores, o vetor precisa estar ordenado
    // Isso ocorre pois, se não, não é possível fazer todas as comparações necessárias.
    sort(data.begin(), data.end());

    find_result(data, target);

    return 0;
}
