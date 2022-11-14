
#include "../ft_printf.h"

void    ft_puthexa(char *s, s_count *count)
{
        int     i;

        i = ft_strlen(s);
        if (s)
        {
                while (i != -1)
                {
                        ft_putchar(s[i], count);
                        i--;
                }
        }
}
