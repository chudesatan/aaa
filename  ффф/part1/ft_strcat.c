/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorrupt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 01:38:36 by fcorrupt          #+#    #+#             */
/*   Updated: 2018/12/23 01:52:59 by fcorrupt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	char *ptr;

	ptr = s1;
	while (*ptr)
		ptr++;
	while ((*ptr++ = *s2++))
		;
	return (s1);
}
