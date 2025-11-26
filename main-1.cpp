#include <iostream>
using namespace std;

int main() {
    // Array 2x3 dengan isi 10-60
    int data[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    // Tampilkan array
    cout << "Array data 2x3 (isi 10-60):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << data[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}