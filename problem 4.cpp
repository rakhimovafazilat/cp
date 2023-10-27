#include <iostream>
using namespace std;

int main() {
    int num, digit, sum = 0;
 
    cin >> num;

    int originalNum = num;

    while (num != 0) {
        digit = num % 10;//6 // 4
        sum += digit; //0 += 6 sum=6+4
        num /= 10;// 4 
    }

    cout << sum << std::endl;
    
    if (sum % 5 == 0) {
        cout << "Yes";
    } else {
    cout << "No";
    }

    return 0;
}
