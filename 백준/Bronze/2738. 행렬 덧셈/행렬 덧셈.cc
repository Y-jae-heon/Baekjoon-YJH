#include <iostream>
using namespace std;

int main() {
    int N,M; // 행렬의 크기 N과 M

    cin >> N >> M;
    int num = N*M;
    int A[num];
    int B[num];

    for (int i = 0; i < num; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < num; i++)
    {
        cin >> B[i];
    }
    for (int i = 0; i < num; i++)
    {
        if((i+1)%3 == 0){
            cout << A[i] + B[i] << '\n';
        }else {
            cout << A[i] + B[i] << " ";
        }
        
    }

    return 0;
}