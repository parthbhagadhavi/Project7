#include<stdio.h>
#include<conio.h>
main()
{
clrscr();

printf("my name is soya parth \n");
    printf("question:-4 \tWrite a Program to print the below pattern using nested for loop.\n");
for(int  row=1;row<=5;row++){

for(int col=1;col<=row;col++){
printf(" ");}
for(int k=0;k<5-row;k++){
printf("%d",k%2);
}


printf("\n");
}
printf("thank you, ☺️");
getch();
}


   