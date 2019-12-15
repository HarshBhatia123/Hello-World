#include<stdio.h>
#include<math.h>
int main()
{
    int n=0,dig=0,arm=0,cno=0;
    printf("enter the number=");
    scanf("%d",&n);
     cno=n;
    while(n!=0)
    {

        dig=n%10;
        n=n/10;
        arm=arm+pow(dig,3);

    }
     printf("arms=%d\n",arm);
    if(arm==cno)
        printf("it is a armstrong number");
    else
         printf("it is not a armstrong number");
    return 0;
}
