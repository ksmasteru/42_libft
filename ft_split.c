/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 12:55:21 by hes-saqu          #+#    #+#             */
/*   Updated: 2023/11/25 20:33:11 by hes-saqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*free_words(char **words)
{
	int	i;

	i = 0;
	while (words[i])
		free(words[i++]);
	if (words)
		free(words);
	return (NULL);
}

static int	wordcounter(char const *str, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] != c && str[i])
			i++;
	}
	return (count);
}

static char	*ft_str_to_c_dup(char const *str, char c, char **words)
{
	int		i;
	char	*res;
	int		lent;

	i = 0;
	lent = 0;
	while (str[lent] && str[lent] != c)
		lent++;
	res = (char *)ft_calloc(lent + 1, sizeof(char));
	if (!res)
		return (free_words(words));
	while (i < lent)
	{
		res[i] = str[i];
		i++;
	}
	return (res);
}

static	char	**ft_split_helper(char const *s, char c, char **words)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			words[i] = ft_str_to_c_dup(s, c, words);
			if (words[i] == NULL)
				return (NULL);
			i++;
		}
		while (*s != c && *s != '\0')
			s++;
	}
	words[i] = NULL;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		lent;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	lent = wordcounter(s, c);
	words = malloc(sizeof(char *) * (lent + 1));
	if (!words)
		return (NULL);
	return (ft_split_helper(s, c, words));
}
