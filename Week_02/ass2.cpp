#include<bits/stdc++.h>
using namespace std;

void countFrequencies(vector<int>& arr, int n) {

    for (int i = 0; i < n; i++) {
        if (arr[i] <= n) {
            int index = arr[i] % (n + 1) - 1;
            if (index >= 0) {
                arr[index] += (n + 1);
            }
        }
    }


    for (int i = 0; i < n; i++) {
        if (arr[i] <= n) {
            arr[i] = 0;
        } else {
            arr[i] = arr[i] / (n + 1);
        }
    }
}

int main() {
    vector<int> arr[] = {2, 3, 2, 3, 5};
    int n = 5;
    int p = 5;

    countFrequencies(arr, n);


    for (int i = 0; i < n; i++) {
       cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
