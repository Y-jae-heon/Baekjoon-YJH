#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // 이전과 다르게 sort 함수를 만들지 않고
    // 내제되있는 sort를 사용
    int num[5]; // 5개의 자연수를 받을 것
    int sum = 0;

    // 범위 기반 for문
    for (auto &k : num)
    {
        cin >> k;
        sum+= k;
    }

    // algorithm의 sort 함수 사용
    sort(num, num + 5);

    cout << sum/5 << '\n' << num[2] << '\n';
    
    return 0;
}