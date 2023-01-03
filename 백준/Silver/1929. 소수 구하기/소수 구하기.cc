#include <iostream>

int num[1000001]; // 백만 이하의 수가 입력될 수 있음
// 전역 변수 선언 시 초기화는 초기 모두 0으로 설정

void findNumber(int m, int n) {

    // 해당 배열이 1일시 배수임으로 출력하지않는 체크
    num[0] = 1; 
    num[1] = 1; 
    // 숫자 0과 1은 소수가 될 수 없음으로 1로 체크

    for (int i = 2; i < n+1; i++)
    {
        // 0과 1은 소수가 될 수 없음으로 2부터 for문
        for (int e = 2*i; e < n+1; e += i)
        {
            // 배수의 시작은 4부터임으로 숫자 3이하는 모두 소수임으로 2*i부터 시작
            // e += i 는 i만큼 임으로 처음 i는 2의 배수 이후 3의 배수 4의 배수로
            // 순차적으로 배수의 역할을 진행한다.
            // 2부터 정수 n 까지의 정수의 배수는 모두 1로 체크
            if(num[e] == 0){
                num[e] = 1;
            }
        }
    }

    for (int i = m; i < n+1; i++)
    {
        // m부터 n 까지의 숫자 중 소수인 부분
        // 1로 체크되지않은 배열은 출력
        if(num[i] == 0) std::cout << i << '\n';
    }
}

int main() {
    int M,N; // min 입력값 M max 입력값 N 사이의 소수를 출력

    std::cin >> M >> N;

    findNumber(M,N);
    
    return 0;
}