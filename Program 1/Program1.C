//This program gives grades based on the policy mentioned in the readme file

#include<stdio.h>
#include<math.h>

int main()
{
    int num, i, j, hand, diff;
    int grades[60];
    scanf(" %d", &num);
    for(i = 0; i<num; i++)
    {
        scanf(" %d", &grades[i]);
    }
    for(i = 0; i<num; i++)
    {
        hand = grades[i];
        if(hand<38)
        {
            printf("%d\n", hand);
            continue;
        }
        else
        {
            for(j = 7; j<=20; j++)
            {
                if(5*j>=hand)
                {
                    diff = 5*j-hand;
                    break;
                }
            }
            if(diff<3)
            {
                hand = 5*j;
            }
            printf("%d\n", hand);
        }
    }
    return 0;
}
