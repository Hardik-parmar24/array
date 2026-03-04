#include <iostream>
using namespace std;

int reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap the elements at start and end
       swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[] = {5,8,1,4,9,3,2,7};
    int size = 8;
   reverseArray(arr, size);
   for(int i=0;i<size;i++){
    cout << arr[i] << " ";
   }
   cout << endl;
}