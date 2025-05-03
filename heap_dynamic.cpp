#include "bits/stdc++.h"

using namespace std;

const char nl = '\n';

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4); // Resizes as needed
    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout<< '\n';
}