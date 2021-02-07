#include <stdio.h>
int main()
{
    char names[][7]={"jhon","mike","rooney","antony","james"};
    int marks[5]={90,70,60,50,40};
    int sum=0;
    float average;
    printf("name \t\tmark\n");
    for(int i=0;i<=4;i++)
    {
        printf("%s\t\t%d\n", names [i],marks [i]);
    }
    for(int i=0;i<=4;i++)

    {
        sum+=marks[i];
    }
    average=sum/5;
    {
    printf("the average marks is %f",average);
    }
    return ;

}
