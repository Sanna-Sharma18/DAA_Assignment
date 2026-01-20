// Merge Sort
#include<iostream>
using namespace std;
void merge(int arr[], int s, int e){
    int mid = (s+e)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;
    int A[len1], B[len2];
    int k = s;
    for(int i=0; i<len1; i++){
        A[i] = arr[k++];
    }
    for(int j=0; j<len2; j++){
        B[j] = arr[k++];
    }
    int i = 0, j = 0;
    k = s;
    while(i < len1 && j < len2){
        if(A[i] <= B[j]){
            arr[k++] = A[i++];
        }
        else{
            arr[k++] = B[j++];
        }
    }
    while(i < len1){
        arr[k++] = A[i++];
    }
    while(j < len2){
        arr[k++] = B[j++];
    }
}

void mergeSort(int arr[], int s, int e){
    if(s>=e)
    return;
    int mid = (s+e)/2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);
    merge(arr, s, e);
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr1[] = {12, 11, 13, 5, 6, 7};
    int arr2[] = {38, 27, 43, 3, 9, 82, 10};

    mergeSort(arr1, 0, 5);
    mergeSort(arr2, 0, 6);

    printArray(arr1, 6);
    printArray(arr2, 7);

    return 0;
}
