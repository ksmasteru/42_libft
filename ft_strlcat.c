/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:14:16 by hes-saqu          #+#    #+#             */
/*   Updated: 2023/11/23 20:58:44 by hes-saqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const	char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (dst[i])
		i++;
	dst_len = i;
	src_len = ft_strlen(src);
	if (dstsize == 0 || dstsize <= dst_len)
		return (src_len + dstsize);
	while (src[j] && j < dstsize - dst_len - 1)
	{
			dst[i] = src[j];
			i++;
			j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
