// Pattern Print in linear pattern(eg:a b c d) Dyanmic Because value give by user
#include<stdio.h>
#include<conio.h>
void Display(int iNo)
{
    int iCnt=0;
    char ch ='a';
    for(int iCnt=1;iCnt<=iNo;iCnt++,ch++)
    {
        printf("%c\t",ch);
        //ch++; also we write in for lopp front of ch++
    }
    printf("\n");

}
int main()
{
    int iValue=0;
    printf("Enter the Count :\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}