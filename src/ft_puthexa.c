
#include "../printf.h"

void    ft_puthexa(char *s)
{
        int     i;

        i = ft_strlen(s);
        if (s)
        {
                while (i != -1)
                {
                        write(1, &s[i], 1);
                        i--;
                }
        }
}
