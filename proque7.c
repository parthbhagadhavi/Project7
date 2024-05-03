#include<stdio.h>
#include<conio.h>
main()
{
clrscr();

printf("my name is soya parth \n");
    printf("question:-7 \tWrite a Program to print the below pattern using nested for loop.\n");
    
    for(int row=1;row<=5;row++){
    for(int col=1; col<=5;col++){
    if(row==1||col==5||col==2||row==5||row==3){
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


   