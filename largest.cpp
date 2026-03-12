#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "enter size of array: " ;
    cin >> n;
    int arr[n];
    cout << "enter elements of array: " ;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int largest = arr[0];

    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            largest = arr[i];
            
        }
    }
    cout << "largest number is: " << largest << endl;
    return largest;
}