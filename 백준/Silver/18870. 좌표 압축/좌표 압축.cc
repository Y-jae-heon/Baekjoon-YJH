#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// 좌표 압축으로 실제 좌표들의 인덱스 정렬 순서를 알기 위한 문제

int main() {
    int n; // 좌표의 갯수
    cin >> n;
    vector<int> x; // 좌표

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        x.push_back(a);
    }

    // 중복값을 제거하기 위해 x를 cx로 복사
    vector<int> cx = x;
    // 오름차순으로 복사한 cx를 정렬
    sort(cx.begin(), cx.end());
    // cx에서 중복된 값들을 제거
    cx.erase(unique(cx.begin(), cx.end()), cx.end());
    for (int i = 0; i < n; i++)
    {
        // i번째 요소의 위치 찾기
        auto idx = lower_bound(cx.begin(), cx.end(), x[i]);
        // lower_bound 는 iterator 임으로 실제 인덱스 값을 알려고할 때는
        // lower_bound의 첫번째 주소를 가리키는 배열을 빼줘야함.
        cout << idx - cx.begin() << ' ';
    }

    return 0;
}