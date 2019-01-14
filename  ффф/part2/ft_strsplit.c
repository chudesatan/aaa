/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorrupt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 13:41:12 by fcorrupt          #+#    #+#             */
/*   Updated: 2018/12/25 14:05:09 by fcorrupt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	*str
	char	**res;

	if (!s || !c)
		return (NULL);
	if (!(str = ft_strnew(2)))
		return (NULL);
	str[0] = c;
	res = ft_strsplitchrset((char*)s, str, NULL);
	free(str);
	return (res);
}
