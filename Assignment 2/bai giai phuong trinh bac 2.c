//
//  bai 1.c
//  mode
//
//  Created by Truemac on 6/4/20.
//  Copyright © 2020 Truemac. All rights reserved.

//
#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
      printf("giai phuong trinh bac 2\n");
      printf("hay nhap so a vao\n");
      scanf("%d",&a);
      printf("hay nhap so b \n");
      scanf("%d",&b);
      printf("hay nhap so c\n");
      scanf("%d",&c);
      if(a!=0){
          float D=(b*b)-(4*a*c);
          if(D<0){
              printf("phuong trinh vo nghiem.\n");
          }else{
              if(D>0){
                  float x1=(-b+ sqrt(D))/(2*a);
                  float x2=(-b-sqrt(D))/(2*a);
                  printf("phuong trinh co 2 nghiem kep la %f va %f \n",x1,x2);
                  } else {
                  float x3=(-b)/(2*a);
                  printf("phuong trinh co nghiem kep %f \n" ,x3);
                  }
          }
      } else {
          if(b==0){
              if(c==0){
                  printf("phuong trinh co vo so nghiem\n");
          } else {
              float x=(-c)/b;
              printf("phuong trinh co 1 nghiem la %f\n", x);
          }
      }
      }
}
