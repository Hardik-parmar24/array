#include <iostream>
using namespace  std;
int main(){
    int n=7,i;
    bool isPrime=true;
    for(i=2;i<=n-1;i++){
       
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout << "prime number" << endl;
    }else{
        cout << "non prime number" << endl;
    }

    return 0;
}
