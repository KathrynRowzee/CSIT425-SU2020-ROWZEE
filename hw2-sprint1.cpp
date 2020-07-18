#include <iostream>

using namespace std;

const int arraySize = 4;

int main() {
    int Array1[] = { 4,5,6,7 };
    int Array2[] = { 2,3,4,5 };
    int Sum[arraySize + 1];

    for (int i = 0; i < arraySize + 1; i++)
        Sum[i] = 0;

    bool carry = 0;
    for (int i = 0; i < arraySize + 1;i++) {
        if (Array1[i] >= 0 && Array2[i] >= 0)
            Sum[i] = Array1[i] + Array2[i];
        if (carry)
            Sum[i]++;
        if (Sum[i] > 9) {
            Sum[i] = Sum[i] - 10;
            carry = true;
        }
        else
            carry = false;
    }

    cout << "Sum: ";
    for (int i = 0; i < arraySize + 1; i++) {
        cout << Sum[i] << " ";
    }
    cout << endl;



    system("pause");
    return 0;
}