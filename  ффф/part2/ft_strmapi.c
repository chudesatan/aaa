/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorrupt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 11:03:15 by fcorrupt          #+#    #+#             */
/*   Updated: 2018/12/25 11:08:02 by fcorrupt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	str = malloc(ft_strlen(s));
	i = 0;
	while (s[i])
	{
		str[i] = (f)(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}
