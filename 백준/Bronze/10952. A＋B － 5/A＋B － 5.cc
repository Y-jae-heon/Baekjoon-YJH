#include <iostream>

using namespace std;

int main() {
    int a,b;

    do
    {
        /* code */
        cin >> a >> b;
        if(a != 0 && b != 0){
            cout << a + b << "\n";
        }

    } while (a != 0 && b != 0);
    

    return 0;
}