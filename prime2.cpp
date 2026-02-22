#include <iostream>
using namespace std;
int main(){
    int n=7,i;
    bool isPrime = true;
    for(i=2;i*i<=n;i++)
    {
        if(n%i == 0){
            isPrime = false;
        }
    }
    if(isPrime == true){
           cout << "prime" << endl;
    }
    else{
        cout << "non prime" << endl;
    }
    return 0;
}