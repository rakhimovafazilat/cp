#include <iostream>
using namespace std;
int main() {
    
    int num1;
    int oddSum = 0;
    int evenSum = 0;
    
    cout << "Enter num1 : " ; cin >> num1;
    
    for(int i=0;i<=num1; i++){
        if(i%2==0){
            evenSum += i;
        }else if(i%2==1){
            oddSum +=i;
        }
       
    }  cout << "Sum of the odd number: " << oddSum << endl;
        cout << "sum of the even number: " << evenSum ;

    return 0;
}
