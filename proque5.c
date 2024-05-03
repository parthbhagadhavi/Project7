#include<stdio.h>
#include<conio.h>
main()
{
clrscr();

printf("my name is soya parth \n");
    printf("question:-5 \tWrite a Program to print the below pattern using nested for loop.\n");
    
    for(int row=1;row<=5;row++){
    for(int col=1; col<=5;col++){
    if(row==1||row==5||col==1||col==5||col==row||col+row==5+1){
    printf("*");
    }else{
    printf(" ");
    }
    }
    printf("\n");
    }
    
printf("thank you, ☺️");
getch();
}


   