#include <bits/stdc++.h>
using namespace std;

bool canFit(long long S, long long N, long long W, long long H){
    long long cols = S / W;   
    long long rows = S / H;  
    return (cols * rows >= N);
}

int main(){
    int T;
    cin >> T;

    while(T--){
        long long N, H, W;
        cin >> N >> H >> W;

        long long low = max(W, H);
        long long high = max(W, H) * N;  
        long long ans = high;

        while (low <= high) {
            long long mid = (low + high) / 2;

            if(canFit(mid, N, W, H)){
                ans = mid;
                high = mid - 1;   
            } 
            else{
                low = mid + 1;  
            }
        }
        cout << ans << endl;
    }

    return 0;
}
