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
    // 편리하게 자연수를 받고 정렬을 하기 위해서 vector 사용
    vector<int> num(5); // 5개의 자연수를 받을 것
    int sum = 0;

    // 범위 기반 for문
    for (auto &k : num)
    {
        cin >> k;
        sum+= k;
    }

    // algorithm의 sort 함수 사용
    // vertor의 begin 과 end 함수로
    // 첫번째와 마지막 요소를 찾아서 정렬
    sort(num.begin(), num.end());

    cout << sum/5 << '\n' << num[2] << '\n';
    
    return 0;
}
