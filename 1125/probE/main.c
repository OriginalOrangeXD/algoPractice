#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void * a, const void * b) {
    int (*int_a)[2] = (int (*)[2]) a;
    int (*int_b)[2] = (int (*)[2]) b;

    printf("%d, %d \n", int_a[0],int_a[1]);

    if ( int_a[0] == int_b[0] ) {
        if ( int_a[1] == int_b[1] ) return 0;
        else if ( int_a[1] < int_b[1] ) return -1;
        else return 1;
    }
    else if ( abs(*int_a[0]-12) < abs(*int_b[0]-12) ) return -1;
    else return 1;
}

int main(){
    int times=5;
    scanf("%d", &times);
    while(times){
        int sortedAM[times][2];
        int amIndex=0;
        int sortedPM[times][2];
        int pmIndex=0;
        for(int i=0; i<times;i++) {
            char cat[5];
            int nums[2];
            scanf("%d:%d %s", &nums[0],&nums[1], cat);
            if(strcmp(cat, "a.m.")){
                sortedAM[amIndex][0]=nums[0];
                sortedAM[amIndex++][1]=nums[1];
            } else {
                sortedPM[pmIndex][0]=nums[0];
                sortedPM[pmIndex++][1]=nums[1];
            }
        }
    compare(sortedAM[1], sortedAM[0]);
    scanf("%d",&times);
    }
    return 0;
}

