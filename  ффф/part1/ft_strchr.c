/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorrupt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 02:04:41 by fcorrupt          #+#    #+#             */
/*   Updated: 2018/12/23 02:08:50 by fcorrupt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *ptr;

	ptr = (char *)s;
	while (*ptr != c)
	{
		if (*ptr == '\0')
		{
			return (NULL);
		}
		ptr++;
	}
	return (ptr);
}
