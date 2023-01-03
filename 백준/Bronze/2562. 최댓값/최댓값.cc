#include <stdio.h>

int main(){
    int max = 0;
    int index = 0;
    int x;

    for(int i=1;i<=9;i++){
        scanf("%d",&x);
        if(max<x){
            max = x;
            index = i;
        }
    }

    printf("%d\n%d",max,index);

    return 0;
}