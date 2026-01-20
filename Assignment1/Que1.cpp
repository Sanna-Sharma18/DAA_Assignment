// Binary Search
#include<iostream>
using namespace std;

int binarySearch(int arr[], int key, int low, int high){
    if(low > high)
        return -1;

    int mid = low + (high - low) / 2;
    if(arr[mid] == key)
        return mid;
    else if(arr[mid] < key){
        low = mid + 1;
        return binarySearch(arr, key, low, high);
    }
    else{
        high = mid - 1;
        return binarySearch(arr, key, low, high);
    }
}

int main(){
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int index = binarySearch(arr, 23, 0, 9);
    if(index != -1)
        cout << "Found at index " << index << endl;
    else
        cout << "Not found" << endl;
    return 0;
}