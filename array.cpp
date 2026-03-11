#include<iostream>
using namespace std;
int main(){
    int num[] = {10,50,78,25,89,-30,-50};
    int i,size=6;
    int smallest = INT8_MAX;
    int largest = INT8_MIN;
    int smallest_index = 0;
    int largest_index = 0;
    for(i=0;i<=size;i++){
        if(num[i] < smallest){
            smallest = num[i];
            smallest_index = i;
        }
        if(num[i] > largest){
            largest = num[i];
            largest_index = i;
        }
    }
    cout << "Index of smallest number is: " << smallest_index << endl;
    cout << "Index of largest number is: " << largest_index << endl;
}