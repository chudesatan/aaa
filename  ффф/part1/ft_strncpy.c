/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorrupt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 00:07:22 by fcorrupt          #+#    #+#             */
/*   Updated: 2018/12/23 01:36:14 by fcorrupt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strncpy(char *dst, const char *src, size_t len)
{
	char *ptr;

	if (dst && src)
	{
		if (!len)
			return (dst);
		ptr = dst;
		while (len--)
			if (*src)
				*dst++ = *src++;
			else
				*dst++ = 0;
		return (ptr);
	}
	return (NULL);
}
