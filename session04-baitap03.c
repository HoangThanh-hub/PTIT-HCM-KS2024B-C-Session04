#include <stdio.h>

int main(){
    int x;
    printf("nhap so nguyen n bat ki: ");
    scanf("%d", &x);

    if (x % 3 == 0) {
        if (x % 5 == 0){
            printf ("%d vua chia het cho 3 vua chia het cho 5\n", x);

     } else{
        printf("%d chia het cho 3\n",x);
     }
    } else {
        if (x % 5 == 0) {
            printf ("%d chia het cho 5\n", x);
        } else {
            printf("%d khong chia het cho ca 3 va 5\n", x);

        }

    }




    return 0;
}