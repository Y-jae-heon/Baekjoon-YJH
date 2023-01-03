#include <iostream>

using namespace std;

int main() {
    int ki = 1;
    int q = 1;
    int r = 2;
    int b = 2;
    int k = 2;
    int p = 8;

    // 입력받을 체스말의 갯수
    int in_ki, in_q, in_r, in_b, in_k, in_p;

    // 입력 받기 cin
    cin >> in_ki;
    cin >> in_q;
    cin >> in_r;
    cin >> in_b;
    cin >> in_k;
    cin >> in_p;

    // 출력

    cout << ki - in_ki << " ";
    cout << q - in_q << " ";
    cout << r - in_r << " ";
    cout << b - in_b << " ";
    cout << k - in_k << " ";
    cout << p - in_p << " ";

    return 0;
}