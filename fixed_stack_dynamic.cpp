#include "bits/stdc++.h"

using namespace std;

const char nl = '\n';

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int fsd[5];  // Fixed size, stack allocated
    for (int i = 0; i < 5; i++) fsd[i] = i;
    cout<< "array elements are: ";
    for (int i = 0; i < 5; i++) cout << fsd[i] << " ";
    cout<< '\n';
}