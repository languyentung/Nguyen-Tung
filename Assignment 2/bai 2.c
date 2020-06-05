////
////  bai 2.c
////  mode
////
////  Created by Truemac on 6/5/20.
////  Copyright © 2020 Truemac. All rights reserved.
////
//
#include <stdio.h>
int main(){
    int a,b,c;
    printf("nhap ba so bat ky tao thanh tam giac");
    printf("nhap so thu nhat\n");
    scanf("%d",&a);
    printf("nhap so thu hai\n");
    scanf("%d",&b);
    printf("nhap so thu ba\n");
    scanf("%d",&c);
    if(a<(b+c)){
        printf("ba so khong phai canh cua tam giac\n");
      }else{
        if(b<(a+c))
            printf("ba so khong phai canh cua tam giac\n");
        }else {
          if(c<(a+b))
            printf("ba so khong phai canh cua tam giac\n");
            }else{
                float("p=(a+b+c)/2");
                float("h=2*sqrt((p*(p-a)*(p-b)*(p-c)))/a");
                float("P=a+b+c");
                float("S=a*h/x");
                 
    }
}
