#include<stdio.h>
#include<string.h>
void display(){
    printf("\033[1;1H\033[2J");
    printf("enter student's name: ");
    char n[100];
    scanf("%s",n);
    FILE *f=fopen("math.csv","r");
    char b[100];
    char *fn;
    while(fgets(b,100,f)!=NULL){
        fn=strtok(b,",");
        fn=strtok(NULL,",");
        if(strcmp(n,fn)==0){
            printf("Maths:\n");
            fn=strtok(NULL,",");
            printf("Isa1: %s\n",fn);
            fn=strtok(NULL,",");
            printf("Isa2: %s\n",fn);
            fn=strtok(NULL,",");
            printf("Esa: %s\n",fn);
            fn=strtok(NULL,",");
            printf("Internal: %s\n",fn);
            fclose(f);
        }
    }

    f=fopen("phy.csv","r");
    while(fgets(b,100,f)!=NULL){
        fn=strtok(b,",");
        fn=strtok(NULL,",");
        if(strcmp(n,fn)==0){
            printf("Physics:\n");
            fn=strtok(NULL,",");
            printf("Isa1: %s\n",fn);
            fn=strtok(NULL,",");
            printf("Isa2: %s\n",fn);
            fn=strtok(NULL,",");
            printf("Esa: %s\n",fn);
            fn=strtok(NULL,",");
            printf("Internal: %s\n",fn);
            fclose(f);
        }
    }

    f=fopen("c.csv","r");
    while(fgets(b,100,f)!=NULL){
        fn=strtok(b,",");
        fn=strtok(NULL,",");
        if(strcmp(n,fn)==0){
            printf("C:\n");
            fn=strtok(NULL,",");
            printf("Isa1: %s\n",fn);
            fn=strtok(NULL,",");
            printf("Isa2: %s\n",fn);
            fn=strtok(NULL,",");
            printf("Esa: %s\n",fn);
            fn=strtok(NULL,",");
            printf("Internal: %s\n",fn);
            fclose(f);
        }
    }
}