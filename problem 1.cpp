#include <iostream>
using namespace std;
int main() {
    int n;
   
    cin >> n;

    cout  << n << ": ";
    for (int i = 1; i <= n; i++){
        if(i%2==1){
            cout << i << " " ;
        }
    }  cout  << n << ": ";
    for (int i = 2; i <= n; i++) {
        if(i%2==0){
             cout << i << " ";
        }     
    }

    return 0;
}
