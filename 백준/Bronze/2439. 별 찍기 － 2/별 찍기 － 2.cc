#include <iostream>

using namespace std;

int main() {
    int N;
    string a = "*";
    string b = " ";
    string c;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        /* code */
        for (int e = 0; e < N-i-1; e++)
        {
            /* code */
            c = c + b;
        }
        
        cout << c << a << "\n";
        c = "";
        a = a + "*";
    }

    return 0;
}