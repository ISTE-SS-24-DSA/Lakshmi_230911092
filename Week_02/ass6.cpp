#include <iostream>
using namespace std;




int summ(int N) {

    if (N <= 0) {
        return 0;
    }

    return N + summ(N - 1);
}

int main() {
    int N;
    cout << "Enter a positive integer N: ";
    cin >> N;


    if (N < 0) {
        cout << " enter a positive integer." << endl;
        return 1;
    }

    int sum = summ(N);
    cout << "The sum of the first " << N << " numbers is: " << sum << endl;

    return 0;
}
