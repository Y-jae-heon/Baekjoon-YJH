#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int tc; // 입력 받을 정수의 갯수
    cin >> tc;
    int num[tc];

    for (auto &k: num)
    {
        cin >> k;
    }
    // 이전처럼 직접 구현이 아닌
    // nlogn 시간복잡도를 가지는 정렬 알고리즘임으로
    // STL을 활용하여 sort 함수를 사용한다.
    // int 는 vertor를 사용해도 되나 이번엔 사용하지않음
    sort(num, num+tc);

    for (int i = 0; i < tc; i++)
    {
        cout << num[i] << '\n';
    }

    return 0;
}

