/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:30:21 by hes-saqu          #+#    #+#             */
/*   Updated: 2023/11/24 19:02:31 by hes-saqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	i = 0;
	while (s1[i])
		i++;
	while (i >= 0)
	{
		if (s1[i] == (unsigned char)c)
			return ((char *)(s1 + i));
		i--;
	}
	return (0);
}
