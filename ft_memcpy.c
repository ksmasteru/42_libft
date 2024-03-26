/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 12:53:52 by hes-saqu          #+#    #+#             */
/*   Updated: 2023/11/24 16:49:41 by hes-saqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*desti;
	const unsigned char	*srci;

	i = 0;
	if (src == dest)
		return (dest);
	desti = (unsigned char *)dest;
	srci = (const unsigned char *)src;
	while (i < n)
	{
		desti[i] = srci[i];
		i++;
	}
	return (dest);
}
