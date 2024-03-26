/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:06:51 by hes-saqu          #+#    #+#             */
/*   Updated: 2023/11/24 21:27:52 by hes-saqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	numlen(int n)
{
	int	counter;

	counter = 1;
	if (n < 0)
		n *= -1;
	while (n >= 10)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	int		i;
	int		lent;
	char	*str;

	i = 0;
	lent = 0;
	if (n == -2147483648)
		return (str = ft_strdup("-2147483648"));
	lent = numlen(n);
	if (n < 0)
		lent++;
	str = (char *)(ft_calloc(lent + 1, sizeof(char)));
	if (n < 0)
	{
		str[i++] = '-';
		n *= -1;
	}
	lent--;
	while (lent >= i)
	{
		str[lent] = (n % 10) + 48;
		n /= 10;
		lent--;
	}
	return (str);
}
