/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dectohexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:19:06 by jalevesq          #+#    #+#             */
/*   Updated: 2022/11/14 12:43:37 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int ft_countint(int n)
{
	int count;
	
	count = 0;
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_dectohexa(int n, int j)
{
	char *ret;
	char *ret2;
	int i;
	int remainder;

	i = 0;
	ret = malloc(sizeof(char) * ft_countint(n));
	if (!ret)
		return (NULL);
	while (n != 0)
	{
		remainder = n % 16;
		if (remainder < 10)
			ret[i++] = 48 + remainder;
		if (remainder > 10)
		{
			if (j == 0)
				ret[i++] = 55 + remainder;
			if (j == 1)
				ret[i++] = 87 + remainder;
		}
		n = n / 16;
	}
	ret2 = malloc(sizeof(char) * ft_strlen(ret));
	if (!ret2)
		return (NULL);
	free(ret);
	free(ret2);
	return (ret2);
}	
