#include <iostream>

using namespace std;

const int MaxArraySize = 4;

int main() {
    int Array1[] = { 1,2,3,4 };
    int Array2[] = { 4,3,2,1 };
    int Sum[MaxArraySize + 1];

    int Size1 = sizeof(Array1) / sizeof(Array1[0]);
    int Size2 = sizeof(Array2) / sizeof(Array2[0]);

    for (int i = 0; i < MaxArraySize + 1; i++)
        Sum[i] = 0;

    bool carry = 0;
    for (int i = 0; i < MaxArraySize + 1; i++) {
        if (i < Size1)
            Sum[i] += Array1[i];
        if (i < Size2)
            Sum[i] += Array2[i];
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
    for (int i = 0; i < MaxArraySize + 1; i++) {
        cout << Sum[i] << " ";
    }
    cout << endl;



    system("pause");
    return 0;
}