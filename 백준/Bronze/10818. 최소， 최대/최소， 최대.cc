#include <iostream>

using namespace std;

int main() {
    int N; // 정수의 갯수
    cin >> N;
    int V[N]; // N의 갯수만큼의 정수 배열
    int a = 1000000;
    int b = -1000000; // a = 최소, b = 최대
    for (int i = 0; i < N; i++)
    {
        /* code */
        cin >> V[i];
        if(V[i] > b){
            b = V[i];
        }
        if(V[i] < a){
            a = V[i];
        }
    }
    cout << a << " " << b << "\n";

    return 0;
}