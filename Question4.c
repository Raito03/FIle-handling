#include <stdio.h>
//Question 4
void main()
{
    FILE *fp1,*fp2,*fp3;
    fp1=fopen("Ohayou.txt","r+");
    if(fp1==NULL)
    {
        printf("The file can't be opened in r+ mode\n");
    }
    char ch1[100];
    printf("The output you get in reading the file in r+ mode:\n");
    char t[]=" it's a beautiful day isn't it?";
    //fprintf(fp1," it's a beautiful day isn't it?");
    //fprintf(fp1,"%s",t);
    while(fgetc(fp1)!=EOF)
    {
        fscanf(fp1,"%s",ch1);
        printf("%s ",ch1);
    }
    fclose(fp1);
    fp2=fopen("Ohayou.txt","w+");
    if (fp2==NULL)
    {
        printf("The file can't be opened in w+ mode\n");
    }
    char ch2[100];
    printf("\nThe output you get in reading the file in w+ mode:\n");
    fprintf(fp2,"%s",t);
    //fprintf(fp2," it's a beautiful day isn't it?");
    while(fgetc(fp2)!=EOF)
    {
        fscanf(fp2,"%s",ch2);
        printf("%s ",ch2);
    }
    fp3=fopen("Ohayou.txt","a+");
    if (fp3==NULL)
    {
        printf("The file can't be opened in a+ mode\n");
    }
    char ch3[100];
    printf("\nThe output you get in reading the file in a+ mode:\n");
    //fputs(t,fp3);
    fprintf(fp3,"%s",t);
    //fprintf(fp3," it's a beautiful day isn't it?");
    while(fgetc(fp3)!=EOF)
    {
        fscanf(fp3,"%s",ch3);
        printf("%s \n",ch3);
    }
    fclose(fp3);
} 
