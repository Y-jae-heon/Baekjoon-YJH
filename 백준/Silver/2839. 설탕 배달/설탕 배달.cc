#include <iostream>

int N;
int main() {
    // int n; // kg 
    std::cin >> N;
    int ans = 0;
    while(N >= 0){
        if(N % 5 == 0) { // 5의 배수임으로 or N 이 3kg 계속 빼서 0이 됬을 때
            ans += (N/5);
            std::cout << ans << '\n';
            return 0;
        }
        N -= 3; // 3kg 제외
        ans++; // 가방 추가
    }   
    std::cout << -1 << '\n';

}