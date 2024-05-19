#include<stdio.h>
#include"full.h"
void add(){
    printf("\033[1;1H\033[2J");
    std s;
    printf("enter roll no. ");
    scanf("%d",&s.roll);
    printf("enter name: ");
    scanf("%s",s.name);

    printf("enter maths marks:\n");
    FILE *f1=fopen("math.csv","a+");
    printf("Isa1: ");
    scanf("%d",&s.i1);
    printf("Isa2: ");
    scanf("%d",&s.i2);
    printf("Esa: ");
    scanf("%d",&s.e);
    printf("Internal: ");
    scanf("%d",&s.it);
    fprintf(f1,"%d,%s,%d,%d,%d,%d\n",s.roll,s.name,s.i1,s.i2,s.e,s.it);
    fclose(f1);
    
    printf("enter physics marks:\n");
    FILE *f2=fopen("phy.csv","a+");
    printf("Isa1: ");
    scanf("%d",&s.i1);
    printf("Isa2: ");
    scanf("%d",&s.i2);
    printf("Esa: ");
    scanf("%d",&s.e);
    printf("Internal: ");
    scanf("%d",&s.it);
    fprintf(f2,"%d,%s,%d,%d,%d,%d\n",s.roll,s.name,s.i1,s.i2,s.e,s.it);
    fclose(f2);

    printf("enter c marks:\n");
    FILE *f3=fopen("c.csv","a+");
    printf("Isa1: ");
    scanf("%d",&s.i1);
    printf("Isa2: ");
    scanf("%d",&s.i2);
    printf("Esa: ");
    scanf("%d",&s.e);
    printf("Internal: ");
    scanf("%d",&s.it);
    fprintf(f3,"%d,%s,%d,%d,%d,%d\n",s.roll,s.name,s.i1,s.i2,s.e,s.it);
    fclose(f3);
}