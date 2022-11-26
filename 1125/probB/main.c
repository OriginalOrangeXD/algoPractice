#include <stdio.h>
#include <stdlib.h>

int main() {
    char arr[2];
    int counts[14]={0};
    int largest=-1;
    int total=0;
    for(int i = 0; i < 5; i++){
        scanf("%s",arr);
        switch (arr[0])
        {
            case 'A':
                counts[0] += 1;
                largest = (counts[0] < largest) ? largest : counts[0];
                break;
            case 'T':
                counts[9] += 1;
                largest = (counts[9] < largest) ? largest : counts[9];
                break;
            case 'J':
                counts[10] += 1;
                largest = (counts[10] < largest) ? largest : counts[10];
                break;
            case 'Q':
                counts[11] += 1;
                largest = (counts[11] < largest) ? largest : counts[11];
                break;
            case 'K':
                counts[12] += 1;
                largest = (counts[12] < largest) ? largest : counts[12];
                break;
            default:
                counts[atoi(&arr[0])-1] += 1;
                if (counts[atoi(&arr[0])-1] > largest) largest=counts[atoi(&arr[0])-1];
                break;
        }
    }
    printf("%d\n", largest);
}
