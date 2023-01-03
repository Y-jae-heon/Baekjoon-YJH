#include <iostream>

using namespace std;

int main() {
    int count[42] = {}; // 42 나머지를 구하는 것임으로 42를 넘을 수 없음
    // 고로 최대 배열은 42

    int n;
    for (int i = 0; i < 10; i++) // 최대 열줄의 숫자까지만 입력
    {
        cin >> n;
        count[n%42]++; // 나머지된 숫자를 count의 인덱스로 사용 후 해당
        // 인덱스에 있는 숫자를 ++;
    }

    int result = 0; // 나머지가 다른 수의 갯수 확인

    for (int n: count) // count 의 배열을 전부 탐색
    {
        if(n > 0){ // 나머지가 다른 수들은 전부 0보다 높음
            result++;
        }
    }
    
    cout << result << "\n"; // 나머지가 다른 수의 총 갯수 출력

    return 0;
}