#include <iostream>
using namespace std;

int maxSubArraySum(int arr[], int n){
    int maxS = arr[0];
    int currentSum = arr[0];

    for (int i = 1; i < n; i++){
        currentSum = max(arr[i], currentSum + arr[i]);
        maxS = max(maxS, currentSum);
    }
    return maxS;
}

int main() {
    int arr[] = {-2, -5, 6, -2, -3, 1, 5, -6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxSubArraySum(arr, n);
    cout << "Maximum subarray sum is: " << result << endl;

    return 0;
}
