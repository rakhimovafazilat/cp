#include <iostream>
using namespace std;
int main() {
    
    int num1;
    int oddSum = 0;
    int evenSum = 0;
    
  cin >> num1;
    
    for(int i=0;i<=num1; i++){
        if(i%2==0){
            evenSum += i;
        }else if(i%2==1){
            oddSum +=i;
        }
       
    }  cout << oddSum << endl;
        cout  << evenSum ;

    return 0;
}
