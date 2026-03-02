#include <iostream>
using namespace std;

int sumOfArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
int  productOfArray(int arr[],int size){
    int product = 1;
    for(int i=0;i<size;i++){
        product *= arr[i];

    }
    return product;
}
int main(){
    int arr[] = {1, 2, 3, 4};
    int size = 4;

    cout << "Sum of array elements: " << sumOfArray(arr, size) << endl;
    cout << "Product of array elements: " << productOfArray(arr, size) << endl;

    return 0;
}