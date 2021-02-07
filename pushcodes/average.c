#include <stdio.h>
int main()
{
    float marks[5]={90.2,30.2,70.4,30.5,40.5};
    float sum=0;
    float average;
    for(int i=0; i<=4; i++)

    sum=sum+marks[i];
    average=sum/5;
    {
        printf("%f",average);
    }
}
