#include <stdio.h>

int main(){
    int x;
    printf("nhap so nguyen n bat ki: ");
    scanf("%d", &x);

    if (x == 0){
        printf("%d khong la so nguyen am khong la so nguyen duong\n", x);
        return 0;
    }
    if (x > 0){
        printf("%d la so nguyen duong\n", x);

    } else {
        printf("%d la so nguyen am\n", x);
    }




    return 0;
}