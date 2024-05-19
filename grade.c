#include<stdio.h>
#include"full.h"
#include<string.h>
#include<stdlib.h>
void grade(){
        printf("\033[1;1H\033[2J");
        std s;
        int r;
        printf("Enter student's roll no :");
        scanf("%d",&r);
        char b[100];
        char *b1;
        FILE *f=fopen("math.csv","r");
        while(fgets(b,100,f)!=NULL){
            b1=strtok(b,",");
            int b2=atoi(b);
            if(b2==r){
                b1=strtok(NULL,",");
                b1=strtok(NULL,",");
                s.i1=atoi(b1);
                b1=strtok(NULL,",");
                s.i2=atoi(b1);
                b1=strtok(NULL,",");
                s.e=atoi(b1);
                b1=strtok(NULL,",");
                s.it=atoi(b1);
                printf("Maths:\n");
                printf("ISA1: %d ISA2:%d ESA:%d INTERNAL:%d\n",s.i1,s.i2,s.e,s.it);
                break;
            }
        }
        int g=s.i1/2+s.i2/2+s.e/2+s.it;
            if(g>90){
                printf("S grade in maths\n");
            }
            else if(g>80){
                printf("A grade in maths\n");
            }
            else if(g>70){
                printf("B grade in maths\n");
            }
            else if(g>60){
                printf("C grade in maths\n");
            }
            else if(g>50){
                printf("D grade in maths\n");
            }
            else{
                printf("Failed in maths\n");
            }
        fclose(f);

        FILE *f2=fopen("phy.csv","r");
        while(fgets(b,100,f2)!=NULL){
            b1=strtok(b,",");
            int b2=atoi(b);
            if(b2==r){
                b1=strtok(NULL,",");
                b1=strtok(NULL,",");
                s.i1=atoi(b1);
                b1=strtok(NULL,",");
                s.i2=atoi(b1);
                b1=strtok(NULL,",");
                s.e=atoi(b1);
                b1=strtok(NULL,",");
                s.it=atoi(b1);
                printf("Physics:\n");
                printf("ISA1: %d ISA2:%d ESA:%d INTERNAL:%d\n",s.i1,s.i2,s.e,s.it);
                break;
            }
        }
        g=s.i1/2+s.i2/2+s.e/2+s.it;
            if(g>90){
                printf("S grade in physics\n");
            }
            else if(g>80){
                printf("A grade in physics\n");
            }
            else if(g>70){
                printf("B grade in physics\n");
            }
            else if(g>60){
                printf("C grade in physics\n");
            }
            else if(g>50){
                printf("D grade in physics\n");
            }
            else{
                printf("Failed in physics\n");
            }
        fclose(f2);

        FILE *f3=fopen("c.csv","r");
        while(fgets(b,100,f3)!=NULL){
            b1=strtok(b,",");
            int b2=atoi(b);
            if(b2==r){
                b1=strtok(NULL,",");
                b1=strtok(NULL,",");
                s.i1=atoi(b1);
                b1=strtok(NULL,",");
                s.i2=atoi(b1);
                b1=strtok(NULL,",");
                s.e=atoi(b1);
                b1=strtok(NULL,",");
                s.it=atoi(b1);
                printf("C:\n");
                printf("ISA1: %d ISA2:%d ESA:%d INTERNAL:%d\n",s.i1,s.i2,s.e,s.it);
                break;
            }
        }
        g=s.i1/2+s.i2/2+s.e/2+s.it;
            if(g>90){
                printf("S grade in c\n");
            }
            else if(g>80){
                printf("A grade in c\n");
            }
            else if(g>70){
                printf("B grade in c\n");
            }
            else if(g>60){
                printf("C grade in c\n");
            }
            else if(g>50){
                printf("D grade in c\n");
            }
            else{
                printf("Failed in c\n");
            }
        fclose(f3);
    printf("\n\n");
}