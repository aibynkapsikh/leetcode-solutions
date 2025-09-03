#include <iostream>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int Yakko, Wakko;
    cin >> Yakko >> Wakko;

    int m;
    m = max(Yakko, Wakko);
    int favorable;
    favorable = 6 - m + 1;
    int total = 6;
    int g = gcd(favorable, total);

    cout << favorable / g << "/" << total / g;

    return 0;
    
}