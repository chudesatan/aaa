/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorrupt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 23:48:52 by fcorrupt          #+#    #+#             */
/*   Updated: 2018/12/23 06:56:18 by fcorrupt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	unsigned int	i;
	size_t			len;
	char			*cp;

	if(!s1)
		return (NULL);
	len = ft_strlen(s1);
	if (!(cp = (char *)malloc(size of(*cp) * len + 1)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		cp[i] = s1[i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}
