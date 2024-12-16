#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function   
     int n=*a,m=*b;
     *a=m+n;
     int dif=m-n;
     if (dif<0)
     *b=-dif;
     else *b=dif;
     
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
