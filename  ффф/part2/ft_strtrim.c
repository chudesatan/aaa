/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorrupt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 12:20:14 by fcorrupt          #+#    #+#             */
/*   Updated: 2019/01/12 13:51:49 by fcorrupt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

cihar	*ft_strtrim(char const *s)
{
	size_t	len;
	char	*new_str;

	while (*s && (*s == ' ' || *s == '\t' || *s == '\n'))
		s++;
	len = ft_strlen(s);
	while (*s && (s[--len] == ' ' || s[--len] == '\t' || s[--len] == '\n'))
		;
	if (!(new_str = ft_strnew(len)))
		return (NULL);
	new_str = ft_strncpy(new_str, s, len + 1);
	new_str[len + 1] = '\0';
	return (new_str);
}
