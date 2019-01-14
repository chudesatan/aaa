/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorrupt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 03:20:55 by fcorrupt          #+#    #+#             */
/*   Updated: 2018/12/23 03:30:36 by fcorrupt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrch(const char *s, int c)
{
	int n;

	n = ft_strlen((char *)s);
	while (0 != n && s[n] != (char)c)
		n--;
	if (s[n] == (char)c)
		return ((char *)&s[n]);
	return (NULL);
}
