/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorrupt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 01:57:14 by fcorrupt          #+#    #+#             */
/*   Updated: 2018/12/23 02:04:13 by fcorrupt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	*ft_strlcat(char *s1, const char *s2, size_t size)
{
	size_t i;
	size_t len;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (size <= ft_strlen(s1))
		return (ft_strlen(s2) + size);
	while (*s1)
		s1++;
	i = 0;
	while ((i < size - (len - ft_strlen(s2)) - 1) && s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (len);
}
