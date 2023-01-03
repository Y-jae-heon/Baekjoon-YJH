#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int a,b,T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        /* code */
        cin >> a >> b;
        cout << "Case #" << i+1 << ": " << a << " + " << b << " = " << a+b << "\n";
    }

    return 0;
}