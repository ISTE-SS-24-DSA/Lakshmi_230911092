#include<bits/stdc++.h>
using namespace std;
int main() {

    set<int> mySet;


    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(40);


   cout << "Elements in the set: ";
    for (const int& element : mySet) {
        cout << element << " ";
    }
    cout << endl;


    int key = 20;
    if (mySet.find(key) != mySet.end()) {
        cout << "Found" <<endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}

