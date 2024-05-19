#include<stdio.h>
#include"full.h"
int main(){
    int x;
    do{
    printf("enter:\n1 to add a student's marks\n2 to check a students marks\n3 to check a student's grade\n4 to exit\n");
    scanf("%d",&x);
    switch(x){
        case 1:
            add();
            break;
        case 2:
            display();
            break;
        case 3:
            grade();
        case 4:
            break;
    }
    }
    while(x!=4);
}