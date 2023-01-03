#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a;
    int c = 0;
    int d = 0;
    for (int i = 1; i <= a; i++)
    {
        /* code */
        b = i;
        c = c + b;
    }

    cout << c << endl;
    return 0;
}