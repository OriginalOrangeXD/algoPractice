#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int times=5;
    scanf("%d", &times);
    while(times){
        int sortedAM[100][2];
        int amIndex=0;
        int sortedPM[100][2];
        int pmIndex=0;
        for(int i=0; i<times;i++) {
            char input[10];
            scanf("%s", input);
            char *ptr = strtok(input, " ");
            char part1[5];
            strcpy(part1,ptr);
            ptr = strtok(NULL, " ");
            char part2[5];
            strcpy(part2,*ptr);
            printf("First: %s\t Second: %s\n",part1,part2);
        }
        scanf("%d",&times);
    }
    /*while(times){
        int sortedAM[100][2];
        int amIndex=0;
        int sortedPM[100][2];
        int pmIndex=0;
        for(int i =0; i < times;i++){
            char input[11];
            fgets(input,10,stdin);
            char *ptr = strtok(input, " ");
            if(strcmp(strtok(NULL, " "), "a.m.")) {
                sortedAM[amIndex][0]=atoi(strtok(ptr,":"));
                sortedAM[amIndex++][1]=atoi(strtok(NULL,":"));
            }
        }
        for(int i=0; i < amIndex; i++){
            printf("%d %d\n", sortedAM[i][0],sortedAM[i][1]);
        }
        scanf("%d", &times);
    }*/
    return 0;
}

