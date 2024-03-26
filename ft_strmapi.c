/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:28:24 by hes-saqu          #+#    #+#             */
/*   Updated: 2023/11/24 21:27:05 by hes-saqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*str;
	unsigned int		lent;
	unsigned int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	lent = ft_strlen(s);
	str = (char *)ft_calloc(lent + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (i < lent)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
