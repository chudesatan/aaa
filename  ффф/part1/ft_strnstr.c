/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorrupt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 03:46:52 by fcorrupt          #+#    #+#             */
/*   Updated: 2018/12/23 03:56:02 by fcorrupt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t n;

	if (*needle == '\0')
		return ((char *)haystack);
	n = ft_strlen(needle);
	while (*haystack != '\0' && len-- >= n)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, n) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
