#include <iostream>

bool fazilat(int a, int b, int c) {
    if (a != b && b != c && a != c) { 
        if (a * a + b * b == c * c || b * b + c * c == a * a||  a * a + c * c == b * b) {
            return true; 
        }
    }
    return false; 
}

int main() {
    int a, b, c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    if (fazilat(a, b, c)) {
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }

    return 0;
}
