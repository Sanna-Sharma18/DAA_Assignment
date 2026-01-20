#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<long long> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    long long largest = A[N - 1];
    long long second_largest = A[N - 2];

    cout << largest + second_largest << endl;

    return 0;
}
