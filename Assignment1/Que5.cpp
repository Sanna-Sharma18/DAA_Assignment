#include <bits/stdc++.h>
using namespace std;

bool canSplit(const vector<int>& A, int M, int X) {
    int segments = 1;
    int currOR = 0;

    for(int x : A){
        if((currOR | x) <= X){
            currOR |= x;
        } 
        else{
            segments++;
            currOR = x;

            if(segments > M)
                return false;
        }
    }
    return true;
}

int minimizeMaxOR(const vector<int>& A, int M){
    int left = 0, right = 0;
    for(int x : A){
        left = max(left, x);
        right |= x;
    }

    int ans = right;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(canSplit(A, M, mid)){
            ans = mid;
            right = mid - 1;  
        } 
        else{
            left = mid + 1;    
        }
    }

    return ans;
}

int main(){
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    for(int i = 0; i < N; i++)
        cin >> A[i];

    cout << minimizeMaxOR(A, M) << endl;

    return 0;
}
