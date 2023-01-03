#include <iostream>
#include <string>

using namespace std;

int OX(string& s){
    int count = 0;
    int sum = 0;

    for (char &v: s)
    {
        if(v == 'O'){
            count++;
            sum += count;
        }else{
            count = 0;
        }
    }
    
    return sum;
}

int main() {
    int N; // 테스트 케이스의 갯수
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        cout << OX(s) << "\n";
    }

    return 0;
    
}