#include <iostream>

using namespace std;

int main() {
    int a,b,t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        if(t > i){
            cin >> a >> b;
            cout << a + b << endl;
        }else {
            return 0;
        }
    }
    
    
    
}