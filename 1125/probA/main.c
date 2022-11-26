#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    char arr[100];
    for(int i =0; i < x; i++){
        scanf("%s", arr);
        if(i%2==0) printf("%s\n",arr);
    }
}
