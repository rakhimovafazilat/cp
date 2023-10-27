#include <iostream>
// using namespace std;

void fibonacciSeries(int n) {
    int num1 = 0, num2 = 1;
    int sum = 0;
    cout << "Fibonacci Series: ";

    for (int i = 0; i < n; i++) {
        cout << num1 << " ";

        sum += num1;
        int next = num1 + num2;
        num1 = num2;
        num2 = next;
    }

    cout << endl << "Sum: " << sum;
}

int main() {
    int n;

    cout << "Enter the number of terms: ";
    cin >> n;

    fibonacciSeries(n);

    return 0;
}
