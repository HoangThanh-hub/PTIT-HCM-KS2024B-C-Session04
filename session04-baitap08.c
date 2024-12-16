#include <stdio.h>

int main(){
    int a,b,c;
    printf("nhap 3 canh cua cua tam giac\n");
    scanf ("%d %d %d", &a, &b, &c);

    if( (a + b > c) && (a + c > b) && (b + c > a)) {
        printf ("%d, %d, %d la 3 canh cua tam giac\n", a,b,c);


    } else {
        printf ("%d, %d, %d khong phai la 3 canh cua tam giac\n", a,b,c);

    }



    return 0;

}