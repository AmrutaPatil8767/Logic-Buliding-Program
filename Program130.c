// To count charater its Space or not
#include<stdio.h>
#include<conio.h>

int CountSpace(char Str[])
{
    int iCnt =0;
     while(*Str != '\0')
     {
        if(*Str == ' ')
        {
            iCnt++;
        }
         Str++;
     }
    return iCnt;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet =0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSpace(Arr);//strlenX(100)

    printf("Frequency of a Space letter is : %d\n",iRet);

    return 0;
}
