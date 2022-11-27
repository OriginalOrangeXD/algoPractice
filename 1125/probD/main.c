#include <stdio.h>
#include <math.h>

int main(){
    float r=0.0f;
    int m=0,c=0;
    scanf("%f %d %d", &r, &m, &c);
    double arr[1000][2];
    int index=0;
    while (r+m+c) {
        double area = r*r*M_PI;
        double estimate = (double)c/m*4*r*r;
        arr[index][0]=area;
        arr[index++][1]=estimate;
        scanf("%f %d %d", &r, &m, &c);
    }
    for(int i = 0; i<index; i++){
        printf("%f %f\n", arr[i][0], arr[i][1]);
    }
}
        

