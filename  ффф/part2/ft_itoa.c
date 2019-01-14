/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorrupt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 14:08:10 by fcorrupt          #+#    #+#             */
/*   Updated: 2019/01/12 15:35:05 by fcorrupt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	buff[22];
	char	*s;
	int		i;
	int		tmp;

	i = 0;
	tmp = n;
	if (n < 0)
		tmp = -n;
	while (tmp > 0)
	{
		buff[i++] = (tmp % 10) + 48;
		tmp = tmp / 10;
	}
	if (n < 0)
		buff[i++] = '-';
	s = ft_memalloc((size_t)i + 1);
	if (n == -2147483648)
		return ("-2147483648");
	else if (n == 0)
		s[0] = '0';
	while (--i >= 0)
		s[tmp++] = buff[i];
	return (s);
}
