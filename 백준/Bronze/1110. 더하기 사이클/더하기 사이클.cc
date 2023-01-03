#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int init, N;
    int count = 0;
    cin >> init;

    N = init;

    do
    {
        /* code */
        N = (N % 10) * 10 + ((N / 10) + (N % 10)) % 10;

        count++;
    } while (init != N);
    cout << count;
    return 0;
}