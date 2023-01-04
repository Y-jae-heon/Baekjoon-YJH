#include <iostream>

using namespace std;

int sort(int num[], int tc) {
    int i,j,key;

    // 배열 0은 이미 정렬된 것으로 보고 1부터 시작
    for (i = 1; i < tc; i++)
    {
        key = num[i]; // 현재 삽입될 숫자를 key변수로 복사

        // 정렬됬을 배열은 i-1 (0은 이미 정렬된 것으로 보기 때문)
        // i-1번쨰부터 역순으로 조사한다.
        // j 값은 음수가 되면 안됨
        // key 값보다 num[j]의 값이 크면 j를 j+1번째로 이동
        for (j = i-1; j >=0 && num[j] > key; j--)
        {
            num[j+1] = num[j];
        }
        
        num[j+1] = key;
    }
    
    for (int i = 0; i < tc; i++)
    {
        cout << num[i] << '\n';
    }
    
    return 0;
}

int main() {
    int tc; // 입력할 정수의 갯수
    cin >> tc;
    int num[1001]; // 1000 이하의 수까지 받을 수 있음

    // tc의 수만큼 num 입력
    for (int i = 0; i < tc; i++)
    {
        cin >> num[i];
    }

    // 정렬 함수 실행
    sort(num, tc);

    return 0;
}