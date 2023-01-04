#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int N; // 입력받을 수의 갯수
int num[500001];

int mean() {
    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += num[i];
    }
    return round(sum / N);
}

int mode() {
    int result;
    int cnt = 0;
    // 절대값 4000 을 넘기지 못한다는 문제 내용으로
    // -4000 과 양수 4000까지 숫자를 받을 수 있음
    int cnt2[8001] = {0};

    for (int i = 0; i < N; i++)
    {
        // -4000 ~ 4000 까지의 범위 중 입력받은 수를 cnt ++ 한다
        cnt2[num[i] + 4000] ++;
    }
    // max_element로 카운트가 가장 높은 수를 찾음
    int max = *max_element(cnt2, cnt2 + 8001);
    for (int i = 0; i < 8001; i++)
    {
        // 카운트가 높은 수를 찾을 떄 cnt ++을 하고
        // 카운트가 중복이 있을 시 2번쨰 작은 값이 최빈값이기 때문에
        // cnt == 2 가 되면 for문을 종료하고 result를 출력
        if(cnt2[i] == max){
            cnt++;
            result = i - 4000;
        }
        if(cnt == 2){
            break;
        }
    }
    return result;
    
}

int main() {
    
    cin >> N;
    

    // 소수점 이하 첫째 자리에서 반올림을 해야하기 떄문에
    // double 형식을 사용
    double sum = 0;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> num[i];
    }

    sort(num, num+N);

    // 첫째 줄 산술평균 출력
    // 소수점 반올림 함수 cmath 헤더로 사용
    cout << mean() << '\n';
    
    // 둘째 줄 중앙값 출력
    // sort 후 중앙에 위치한 값 출력
    cout << num[(N-1)/2] << '\n';

    // 셋째 줄 최빈값 출력
    cout << mode() << '\n';

    // 넷째 줄 범위
    // sort로 오름차순을 했음으로 가장 큰 수(마지막 배열)
    // 가장 작은 수 (첫번째 배열)을 - 하여 출력
    cout <<  num[N-1] - num[0] << '\n';
    return 0;
}
