#include <iostream>

using namespace std;

int main() {
    int N;
    string a = "*";
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        /* code */
        cout << a << "\n";

        a = a + "*";
    }

    return 0;
}