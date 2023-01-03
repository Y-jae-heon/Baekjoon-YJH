#include <iostream>

using namespace std;

int main() {
    int X,N;
    int a,b,c;
    int d = 0;

    cin >> X >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a >> b;
        c = a * b;
        d = d + c;
    }
    if(X == d){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;

}