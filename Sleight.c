#include "stdio.h"
#include "string.h"

int main()
{
    int t;
    scanf("%d", &t);
    for (int j = 0; j<t; j++)
    {
        char cards[50];
        scanf("%s", cards);
        char cur_state = '1';
        int cnt = 0;
        for (int i = 0; cards[i] != '\0'; i++) {
            if (cards[i] != cur_state)
            {
                if (cur_state=='1')
                    cnt++;
                cur_state = cards[i];
            }
        }
        printf("%d\n", cnt);
    }
}