#include <iostream>
using namespace std;
int main (){
    int arr[] = {10,30,23,90,50};
    int n = 5;
    int largest = arr[0];
    int slargest = -1;
    for(int i=0;i<n;i++){
        if(arr[i] >= arr[i-1]){
            cout << "array is sorted" << endl;
        }
        else
        {
          return false;
        }
    }
    return true;
}