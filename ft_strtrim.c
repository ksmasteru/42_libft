/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:40:59 by hes-saqu          #+#    #+#             */
/*   Updated: 2023/12/10 17:21:09 by hes-saqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_research(char const *s1, char const *s2)
{
	int	i;
	int	j;
	int	counter;

	i = 0;
	counter = 0;
	while (s1[i])
	{
		counter = 0;
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				counter++;
			j++;
		}
		if (counter == 0)
			return (i);
		i++;
	}
	return (i);
}

static int	ft_strrechr(int c, char const *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		if (s2[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_strdupple(char const *s1)
{
	int		i;
	int		lent;
	char	*str;

	i = 0;
	lent = ft_strlen(s1);
	str = (char *)malloc(sizeof(char) * (lent + 1));
	while (i < lent)
	{
		str[i] = s1[i];
		i++;
	}
	str[lent] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*res;
	int		i;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	if (s1[0] == '\0' || set[0] == '\0' || set == NULL)
		return (ft_strdupple(s1));
	start = ft_research(s1, set);
	if (start == (int)ft_strlen(s1))
		return (ft_strdupple(""));
	end = ft_strlen(s1) - 1;
	i = ft_strrechr(s1[end], set);
	while (i == 1 && end-- > 0)
		i = ft_strrechr(s1[end], set);
	res = (char *)malloc((end - start + 1 + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[end - start + 1] = '\0';
	ft_memcpy(res, (char *)s1 + start, end - start + 1);
	return (res);
}
