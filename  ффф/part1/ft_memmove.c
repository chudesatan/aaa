/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorrupt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 23:15:40 by fcorrupt          #+#    #+#             */
/*   Updated: 2018/12/23 06:58:25 by fcorrupt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*a;
	char		*b;
	size_t		i;

	i = -1;
	a = (char *)dst;
	b = (char *)src;
	if (b < a)
		while ((int)(--len) >= 0)
			*(a + len) = *(b + len);
	else
		while (++i < len)
			*(a + i) = *(b + i);
	return (dst);
}
