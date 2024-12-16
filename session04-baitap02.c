#include <stdio.h>

int main(){
    int x;
    printf("nhap so nguyen n bat ki: ");
    scanf("%d", &x);

    if (x == 0){
        printf("%d khong la so chan cung khong la so le\n", x);
        return 0;
    }
    if (x % 2 == 0){
        printf("%d la so chan\n", x);

    } else {
        printf("%d la so le\n", x);
    }




    return 0;
}