#include<bits/stdc++.h>
using namespace std;

void printN(int current, int n) {
    if (current > n) {
        return;
    }

    cout << current << " ";


    printN(current + 1, n);
}
int main(){
int n;
cout<<"enter the number of elements:";
cin>>n;
printN(1, n);

    cout << endl;
    return 0;
}
