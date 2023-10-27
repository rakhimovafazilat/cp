#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a value for n: ";
    cin >> n;

    cout << "Odd numbers from 1 to " << n << ": ";
    for (int i = 1; i <= n; i++){
        if(i%2==1){
            cout << i << " " ;
        }
    }  cout << "\nEven numbers from 1 to " << n << ": ";
    for (int i = 2; i <= n; i++) {
        if(i%2==0){
             cout << i << " ";
        }     
    }

    return 0;
}
