/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorrupt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 10:51:40 by fcorrupt          #+#    #+#             */
/*   Updated: 2018/12/25 11:02:14 by fcorrupt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*str;

	str = malloc(ft_strlen(s));
	i = 0;
	while (s[i])
	{
		str[i] = (f)(s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}
