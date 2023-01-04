#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N,k; // 응시자의 수 N, 상을 받을 사람의 수 k
    cin >> N >> k;

    int num[N];

    // 범위 기반 for문
    for (auto &k: num)
    {
        cin >> k;
    }
    // 이전 시간에 했던 sort 함수 활용
    sort(num, num + N);

    // 오름차순으로 정렬 이후
    // 응시자의 수 - 상을 받을 사람의 수를 하면
    // 커트라인이 나옴.
    cout << num[N-k] << '\n';

    return 0;
}