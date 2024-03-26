/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:36:55 by hes-saqu          #+#    #+#             */
/*   Updated: 2023/12/10 17:30:57 by hes-saqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	str_len;
	size_t	i;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len || len == 0)
		return (ft_strdup(""));
	str_len = s_len - start;
	str = (char *)ft_calloc((str_len + 1), sizeof(char));
	if (!str)
		return (NULL);
	while ((i < str_len) && (s[start]) && i < len)
		str[i++] = s[start++];
	return (str);
}
