#include <iostream>
#include <cmath>

bool isPrime(int i){
    int rt;
    rt = sqrt(i); // 루트값으로 변형

    if(rt == 1 && i != 1) { // 2,3인 경우
        return true;
    }
    if(i%2){ // 홀수일 경우
        for (int j = 2; j <= rt; j++)
        {
            if(!(i%j)) // 짝수일 경우 소수가 아님
                return false;
            if(j == rt) // 위 if를 통과한 후 rt와 같을 시
                return true;
        }
        
    }


}

int main() {
    int T; // 테스트 케이스의 갯수
    std::cin >> T;

    for (int i = 0; i < T; i++)
    {
        int n; // 입력받을 정수
        std::cin >> n;

        // 두 수의 차이가 가장 작은 파티션을 구해야하기 때문에
        // n의 중앙값(n/2)부터 2까지 --로 감소시키며 for문
        for (int i = n / 2; 2 <= i; i--)
        {
            // n/2를 중심으로
            // n + i 와 n - i 둘다 소수가 되도록 하는
            // i 를 찾아야함.
            if(isPrime(i) && isPrime(n - i)){
                std::cout << i << " " << n - i << '\n';
                break;
            }
        }
        
    }
    return 0;
}