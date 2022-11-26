#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(){
    char pairs[20][20][11];
    char ins[20][11];
    int index=0;
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    for(int i =0; i < x; i++){
        for(int j =0; j<y; j++){
            scanf("%s", pairs[i][j]);
        }
    }
    for(int i =0; i < y; i++){
        int inAll=1;
        for(int j=1; j < x; j++){
            int inList=0;
            for(int z=0; z< y; z++){
                if(strcmp(pairs[0][i], pairs[j][z])==0){
                    inList =1;
                    break;
                }
            }
            if(inList!=1){
                inAll=0;
                break;
            }
        }
        if(inAll)
        {
            strcpy(ins[index++], pairs[0][i]);
        }
    }
    printf("%d\n", index);
    qsort(ins, index, 11, strcmp);
    for(int i =0; i < index; i++){
        printf("%s\n",ins[i]);
    }

    return 0;
}
