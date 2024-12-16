#include <stdio.h>

int main (){
    int x;
    printf ("nhap thang n: ");
    scanf ("%d", &x);

    switch (x){
        case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
        printf ("thang %d co 31 ngay\n", x);
        break;
        case 4 : case 6 : case 9 : case 11 :
        printf ("thang %d co 30 ngay\n", x);
        break;
        case 2 :
        printf ("thang %d co 28 ngay\n", x);
        break;
        default :
        printf ("thang %d khong hop le\n", x);
        break;
    }


    return 0;
}