#include <iostream>

using namespace std;

int main() {
    int H,M;
    int clock;
    int count = 0;

    cin >> H >> M >> clock;
    if(M + clock >= 60){
        do
        {
            clock = clock - 60; // clock 과 M 의 합산이 60 아래로 떨어질 떄 까지
            count++;
        } while (M + clock >= 60);
    }

    M = M + clock;

    H = H + count;
    
    if(H >= 24){
        H = H - 24;
    }

    cout << H << " " << M;

    return 0;
}