#include <stdio.h>
 int main()
{
    int marks;
    printf("Enter your marks ");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
    {
        printf("null");
    }
    else if(marks<50)
    {
        printf("yehh you failed");
    }
    else if(marks>=50 && marks<60)
    {
        printf("why are you even trying");
    }
    else if(marks>=60 && marks<70)
    {
        printf("its C yupp you should have studied hard");
    }
    else if(marks>=70 && marks<80)
    {
        printf("congratulations you got B");
    }
    else if(marks>=80 && marks<90)
    {
        printf("congratulations you have got an A");
    }
    else
    {
        printf("congratulations you have got an A+");
    }
    return 0;
}

