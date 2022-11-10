/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dectohexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:19:06 by jalevesq          #+#    #+#             */
/*   Updated: 2022/11/10 15:43:35 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int ft_countint(int n)
{
	int count;
	
	count++;
	while (n)
	{
		count++;
		n /= 10;
	}
}

char	*ft_dectohexa(int n, int fd)
{
	char *ret;
	int i;

	i = 0;
	ret = malloc(sizeof(char) * ft_countint(n));
	if (!ret)
		return (NULL);
	while (n)
	{
		if (n > 16)
		{
			ret = n /= 16;
			ret = n %= 16;
			
		}
		if (n < 16)
	}
	
}

#include <stdio.h>
int main(void)
{
	int i = 23;
	printf("%s", ft_dectohexa(i, 1));
}