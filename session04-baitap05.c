#include <stdio.h>

int main(){
    int x,y,z;
    printf ("nhap vao 3 so nguyen\n");
    scanf ("%d %d %d", &x, &y, &z);

    if((z > x && z < y) || ( z < x && z > y)){
        printf ("so %d nam giua %d va %d\n", z, x, y);

    } else {
        printf ("so %d khong nam giua %d va %d\n", z, x, y);

    }


    return 0;

}