/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorrupt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 22:47:01 by fcorrupt          #+#    #+#             */
/*   Updated: 2019/01/12 15:46:14 by fcorrupt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*buff;
	size_t			a;

	a = 0;
	buff = ((unsigned char *)s);
	while (a < n)
	{
		buff[a] = 0;
		a++;
	}
}
