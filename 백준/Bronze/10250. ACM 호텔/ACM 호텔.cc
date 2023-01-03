#include <iostream>
#include <math.h>

int h(int H, int N){
    return ceil((double)N/H);
}

int main() {
    int T; // 테스트 케이스의 개수
    std::cin >> T;
    // YYXX 로 이루어진 호수의 YY는 H를 넘지 못하고 XX 는 W를 넘지 못한다.

    for (int i = 0; i < T; i++)
    {
        int H,W,N; // 층 수, 방 수 , n번째 손님
        std::cin >> H >> W >> N;
        
        int t = h(H,N); // 호수
        int w = (((h(H,N) - 1) * H) - N) * -1; // 층수 / 음수임으로 양수로 변환
        int room = (w * 100) + t;
        
        std::cout << room << '\n';
    }
    

    return 0;
}