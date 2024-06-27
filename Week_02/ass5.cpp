#include <iostream>
using namespace std;

void fib(int n) {
    if (n <= 1)
        return n;
int last=fib(n-1);
    int slast=fib(n-2);
     return last+slast;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    ans=fib(n);
    cout<<ans;

    return 0;
}

