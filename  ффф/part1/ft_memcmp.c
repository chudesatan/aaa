/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorrupt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 23:34:48 by fcorrupt          #+#    #+#             */
/*   Updated: 2019/01/12 15:48:33 by fcorrupt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	i = 0;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (a[i] == b[i] && (i < n) && a[i])
		i++;
	if (!(i == n))
		return (a[i] - b[i]);
	return (a[i - 1] - b[i - 1]);
}
