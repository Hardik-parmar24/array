#include <iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50}; 
    for(int i=0;i<5;i++){
        if(arr[i] == 30){
            return i;
        }
        else{
            cout << "Element not found at index: " << i << endl;
        }
    }
    return -1;
}