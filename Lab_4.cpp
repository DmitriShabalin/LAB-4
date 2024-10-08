#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    const int n = 4;
    int C[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            C[i][j] = rand() % 31 - 15;
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) {
            if (C[i][j] < 0) {
                C[i][j] = 0;
            }
            else {
                C[i][j] = 1;
            }
        }
    }

    cout << endl;

    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}