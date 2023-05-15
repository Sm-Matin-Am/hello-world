# include <stdio.h>

int main()
{
    int doll_num;
    int screams;
    scanf("%d", &doll_num);
    
    if (doll_num == 1)
        screams = 2;
    else if (doll_num > 1)
        screams = 3;
    else
        screams = 0;
    
    printf("%d", screams);
    
    return 0;
}