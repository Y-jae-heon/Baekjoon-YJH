#include <iostream>

using namespace std;

int main() {
    int N,X;

    cin >> N >> X;

    int A[N];

    for (int i = 0; i < N; i++)
    {
        /* code */
        cin >> A[i];
        if(A[i] < X) {
            cout << A[i] << " ";
        }
    }
    
    return 0;
}