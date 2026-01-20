#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<long long> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    vector<long long> B = A;
    sort(B.begin(), B.end());

    long long specialty = 0;

    for(int i = 0; i < n; i++){
        auto it = upper_bound(B.begin(), B.end(), A[i]);
        int greaterCount = B.end() - it;

        if(greaterCount >= k){
            specialty += A[i];
        }
    }

    cout << specialty << endl;

    return 0;
}
