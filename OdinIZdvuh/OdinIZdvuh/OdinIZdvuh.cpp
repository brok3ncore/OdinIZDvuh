#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));

    const int sizeA = 4, sizeB = 5;
    int A[sizeA], B[sizeB];

    for (int i = 0; i < sizeA; i++) A[i] = 1 + rand() % 10;
    for (int i = 0; i < sizeB; i++) B[i] = 1 + rand() % 10;
    int result[sizeA * sizeB], index = 0;
    for (int i = 0; i < sizeA; i++) {
        for (int j = 0; j < sizeB; j++) {
            result[index++] = A[i] * B[j];
        }
    }

    cout << "Массив A: ";
    for (int i = 0; i < sizeA; i++) cout << A[i] << " ";
    cout << endl;

    cout << "Массив B: ";
    for (int i = 0; i < sizeB; i++) cout << B[i] << " ";
    cout << endl;

    cout << "Массив (результат): ";
    for (int i = 0; i < sizeA * sizeB; i++) cout << result[i] << " ";
    cout << endl;

    return 0;
}
