/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 12:58:26 by hes-saqu          #+#    #+#             */
/*   Updated: 2023/12/09 23:34:06 by hes-saqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_lent;
	int		s2_lent;
	char	*str;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!s1 || !s2)
		return (NULL);
	s1_lent = ft_strlen(s1);
	s2_lent = ft_strlen(s2);
	str = (char *)ft_calloc((s1_lent + s2_lent + 1), sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (*s2)
		str[i++] = *s2++;
	return (str);
}
