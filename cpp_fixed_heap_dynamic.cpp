#include "bits/stdc++.h"

using namespace std;

const char nl = '\n';

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int* fhd = new int[10]; // Fixed size on heap
    for (int i = 0; i < 10; i++) fhd[i] = i;
    cout<< "array elements are: ";
    for (int i = 0; i < 10; i++) cout << fhd[i] << " ";
    delete[] fhd;
    cout<< nl;
}