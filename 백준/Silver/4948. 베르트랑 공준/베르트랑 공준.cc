#include <iostream>

int arr[246913]; // n은 123456 까지 받을 수 있음으로 2n 까지 arr 배열을 받을 수 있음
// 그렇다고 2n 까지의 배열 +1 로 딱 배정하진 말자
// 넉넉하게 잡아 줄 필요가 있음. 

int findNumber(int n) {
    int ans = 0;
    // 이전 시간에 했던 에라토스테네스의 체를 활용한 공식
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i < (2*n)+1; i++) // n보다 크고 2n 보다 작거나 같은 소수의 개수임으로
    {
        for (int j = 2*i; j < (2*n)+1; j+=i)
        {
            if(arr[j] == 0) arr[j] = 1;
        }
    }

    for (int i = n+1; i < (2*n)+1; i++)
    {
        if(arr[i] == 0) ans++;
    }

    return ans;
}

int main() {
    int n; // 입력받을 정수

    while (1) // 0을 입력받으면 프로그램 종료
    {
        std::cin >> n;
        if(n == 0) break;
        std::cout << findNumber(n) << '\n';
    }
    
    return 0;
}