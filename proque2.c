#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int chara=11;
printf("my name is soya parth \n");
    printf("question:-2 \tWrite a Program to print the below pattern using nested for loop.\n");
for(int  row=11;row<=15;row++){
for(int col=row;col>=11;col--){
printf("%d ",chara);
chara++;
}

printf("\n");
}
printf("thank you, ☺️");
getch();
}