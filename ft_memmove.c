/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:05:01 by hes-saqu          #+#    #+#             */
/*   Updated: 2023/11/24 16:52:18 by hes-saqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:04:06 by hes-saqu          #+#    #+#             */
/*   Updated: 2023/11/19 13:04:06 by hes-saqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	const unsigned char	*srci;

	if (dst == src)
		return (dst);
	if ((!dst && !src) || (len == 0))
		return (dst);
	dest = (unsigned char *)dst;
	srci = (const unsigned char *)src;
	if (dst < src)
		dst = ft_memcpy(dst, src, len);
	else if (dst > src)
	{
		while (len > 0)
		{
			dest[len - 1] = srci[len - 1];
			len--;
		}
	}
	return (dst);
}
