#include<stdio.h>
#include<conio.h>
main()
{
clrscr();

printf("my name is soya parth \n");
    printf("question:-3 \tWrite a Program to print the below pattern using nested for loop.\n");
for(int  row=5;row>=1;row--){
for(int space=1;space<=row-1;space++){
printf(" ");
}
for(int col=row;col<=5;col++){
printf("%d",col);
}

printf("\n");
}
printf("thank you, ☺️");
getch();
}


