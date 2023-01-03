#include <iostream>

int d(int number){
    int sum = number;

    while (number != 0)
    {
        sum = sum + (number % 10); // 첫 째 자리수 sum
        number = number / 10; // 첫 째 자리 제거
    }
    return sum;
    
}

int main() {
    bool check[10001]{ false }; // boolean 배열로 전체 false
    // false는 출력 수 true는 출력하면 안되는 수
    
    for (int i = 1; i < 10001; i++)
    {
        int n = d(i); // 0이 되는 수는 생성 수가 있기 때문에 return
        // return 될 시 true 출력 하면 안되는 수
        if(n < 10001) { // 10000 이 넘는 수 X
            check[n] = true;
        }
    }

    for (int i = 1; i < 10001; i++)
    {
        if(!check[i]){ // false 인 배열 index 출력
            std::cout << i << "\n";
        }
    }
    
    return 0;
}