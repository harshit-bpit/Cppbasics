#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1, c;

    cout << a << " " << b << " ";

    // For Fibonacci series up to n
    while (b < n) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    cout << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Fibonacci series up to " << n << ":" << endl;
    fibonacci(n);

    return 0;
}
