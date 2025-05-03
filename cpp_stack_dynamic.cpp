#include "bits/stdc++.h"

using namespace std;

const char nl = '\n';

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    cout<< "Enter Array size: ";
    cin >> n;
    int arr[n]; 
    for (int i = 0; i < n; i++) arr[i] = i;
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout<< '\n';
}