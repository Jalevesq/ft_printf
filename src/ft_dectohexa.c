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
	int remainder;
	int quotient;

	i = 0;
	ret = malloc(sizeof(char) * ft_countint(n));
	if (!ret)
		return (NULL);
	quotient = n;
	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder<10)
			ret[i++] = 48 + remainder;
		else
			ret[i++] = 55 + remainder;
		quotient = quotient / 16;
	}
	return (ret);
}

#include <stdio.h>
int main(void)
{
	int i = 23;
	printf("%s", ft_dectohexa(i, 1));
}
