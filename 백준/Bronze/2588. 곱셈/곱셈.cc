#include <iostream>

using namespace std;

int main() {
    int a,b;

    cin >> a >> b;


    cout << b % 10 * (a) << endl; // 일의 자리
    cout << (b/10) % 10 * (a) << endl; // 십의 자리
    cout << (b/100) % 10 * (a) << endl; // 백의 자리

    cout << a * b << endl;

    return 0;
}