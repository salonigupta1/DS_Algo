//Minimum index finder
//Selection Sort
#include<iostream>
using namespace std;

int minimumIndex(int arr[], int s, int e){
    int sm1 = INT32_MAX;
    int mindex;

    for(int i=s; i<e; i++){
        if(sm1 > arr[i]){
            sm1 = arr[i];
            mindex = i;
        }
    }

    return mindex;
}

void fun(int arr[], int start_index, int end_index){
    if(start_index >= end_index){
        return;
    }
    int min_index;
    int temp;

    min_index = minimumIndex(arr, start_index, end_index);

    temp = arr[start_index];
    arr[start_index] = arr[min_index];
    arr[min_index] = temp;

    fun(arr, start_index + 1, end_index);
}

int main() {
    int arr[] = {23,765,3,65,12,56,34,2};
    int n = sizeof(arr)/sizeof(int);
    fun(arr, 0, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}