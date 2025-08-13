#include<iostream>
using namespace std;

int main () {
    int n;
    cout << " Enter the value to print Binary :" << endl;
    cin >> n;

    long long int ans = 0;
    long long int place = 1; // this replaces pow(10, i)

    while (n != 0) {
        int bit = n & 1;
        ans = (bit * place) + ans;
        n = n >> 1;
        place *= 10;
    }

    cout << " Converted Binary Number is :" << ans << endl;
    return 0;
}
