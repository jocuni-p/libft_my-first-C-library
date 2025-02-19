/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:51:44 by jocuni-p          #+#    #+#             */
/*   Updated: 2025/02/18 12:11:20 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Utilizando malloc(3), genera una string que representa el valor entero
recibido como argumento. Los números negativos tambien se gestionan.*/
//#include<stdio.h>
//#include<stdlib.h>
#include "libft.h"

static int	count_dig(int n)
{
	int	c;

	c = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		c = 1;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = count_dig(n);
	str = (char *)ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	while (i > 0)
	{
		str[i - 1] = (n % 10) + 48;
		n = n / 10;
		i--;
		if (i != 0 && str[i - 1] == '-')
			return (str);
	}
	return (str);
}
/*
int	main(void)
{
	int		n = -77747745;
	char	*itoa;

	printf("int  >%i<\n", n);
	itoa = ft_itoa(n);
	printf("ascii>%s<\n\n", itoa);
	free(itoa);
	return (0);
}*/
