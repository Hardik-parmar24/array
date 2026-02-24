#include <iostream>
using namespace std;

int factorialN(int n){
    int fact =1;
    for(int i=0;i<n;i++){
        fact *= i;
    } 
    return fact;
}
int nCr(int n,int r){
    int fact_n = factorialN(n);
    int fact_r = factorialN(r);
    int fact_nmr = factorialN(n-r);

    return fact_n/(fact_r*fact_nmr);
}

int main (){
    int n=4,r=2;
    cout << "nCr: " << nCr(n,r) << endl;
    return 0;
}