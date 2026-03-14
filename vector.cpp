#include <iostream>
#include <vector>
using namespace std;    


int main() {
    int N, X;
    cout << "enter arr:" ;
    cin >> N ;
    cout << "enter element to search:" ;
    cin >> X ;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    bool found = false;
    for (int i = 0; i < N; i++) {
        if (arr[i] == X) {
            found = true;
            break;
        }
    }
    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    return 0;
}