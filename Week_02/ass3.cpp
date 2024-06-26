#include<bits/stdc++.h>
using namespace std;


int findValueByKey(const vector<string>& keys, const vector<int>& arr, const string& S) {
    int n = keys.size();
    for (int i = 0; i < n; i++) {
        if (keys[i] == S) {
            return arr[i];
        }
    }
    return -1; // Key not found
}

int main() {
    int n = 4;
    vector<string> keys = {"csdb", "dsh", "askj", "adfs"};
    vector<int> arr = {4, 5, 8, 9};
    string S = "askj";

    int result = findValueByKey(keys, arr, S);

    cout << result << endl;

    return 0;
}
