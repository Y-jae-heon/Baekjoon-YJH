#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool comp(pair<int,int> a, pair<int,int> b) {
    if(a.second == b.second){
        // a.second(a의 y)가 b.second(b의 y) 보다 같을 시 
        // a.first(a의 x)가 b.first(b의 x) 보다 작을 시
        return a.first < b.first;
    }else {
        // a.second(a의 y)가 b.second(b의 y) 보다 작을 시 
        return a.second < b.second;
    }
    
    
}

int main() {
    int n;
    cin >> n;

    int x,y;
    // pair 클래스 사용, 사용자가 지정한 2개 타입 저장
    // int int
    // vector를 사용함으로 pair 변수를 저장할 수 있도록
    vector<pair<int,int>> v;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        // vector 변수 끝에 요소를 추가
        v.push_back({x,y});
    }

    // comp 라는 함수로 정렬 방식을 변경
    sort(v.begin(), v.end(), comp);

    for (int i = 0; i < n; i++)
    {
        // pair 로 저장한 값은 각각 first와 second로 접근 가능
        cout << v[i].first << " " << v[i].second << '\n';
    }
    
    return 0;
}