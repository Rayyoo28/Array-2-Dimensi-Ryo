#include <iostream>
using namespace std;

int main() {
    // Array 2x2 dengan isi 5, 8, 3, 1
    int matriks[2][2] = {
        {5, 8},
        {3, 1}
    };

    // Tampilkan array
    cout << "Array matriks 2x2 (isi 5, 8, 3, 1):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}