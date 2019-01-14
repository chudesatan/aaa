/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorrupt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 23:22:41 by fcorrupt          #+#    #+#             */
/*   Updated: 2018/12/22 23:34:25 by fcorrupt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	*num;
	int				i;

	i = 0;
	a = (unsigned char *)s;
	num = (unsigned char)c;
	while (n--)
	{
		if (a[i] == num)
			return (a + i);
		i++;
	}
	return (NULL);
}
