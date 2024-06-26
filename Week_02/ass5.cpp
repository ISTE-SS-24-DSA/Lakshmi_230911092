#include <iostream>
using namespace std;

void fib(int n) {
    if (n <= 0) return;


    int a = 1, b = 1;


    if (n == 1) {
        cout << a << endl;
        return;
    }


    cout << a << " " << b << " ";


    for (int i = 3; i <= n; i++) {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    fib(n);

    return 0;
}

