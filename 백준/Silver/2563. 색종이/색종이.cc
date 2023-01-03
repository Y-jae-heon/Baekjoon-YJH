#include <iostream>

using namespace std;

// map의 x축과 y축의 배열 크기를 110으로 하는 이유는
// 10x10의 검은색 종이가 흰색 도화지를 벗어날 범위까지 배열수로 체크하는 것
// bool 로 true false로 해당 부분이 검은색 칠해져있는지 체크
bool map[110][110]; 

int main() {
    int N; // 색종이의 개수
    cin >> N;
    
    int cnt = 0;

    while (N--)
    {
        int x,y;
        cin >> x >> y;
        for (int i = x; i < x+10; i++)
        {
            for (int j = y; j < y+10; j++)
            {
                // i는 x축 j는 y축의 시작점
                // 검은색 종이는 전부 10x10으로 동일함으로
                // +10 하여 해당 배열까지 true 체크
                map[i][j] = true;
            }
            
        }
    }

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            // 각 i와 j를 100까지만 돌 수 있게 하는 이유는
            // 각 100 이상은 흰색 도화지를 벗어난 부분이기 때문
            if(map[i][j]){
                // true인 즉, 검은색 종이가 있는 위치를 확인하여
                // cnt ++
                cnt++;
            }
        }
        
    }
    
    cout << cnt << '\n';

    return 0;
}