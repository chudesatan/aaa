/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorrupt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 04:21:01 by fcorrupt          #+#    #+#             */
/*   Updated: 2018/12/23 04:30:47 by fcorrupt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int res;
	int flag;

	flag = 1;
	res = 0;
	while (*str && (*str == '\r' || *str == '\n' || *str == '\t' ||
				*str == '\f' || *str == ' '))
		++str;
	if (*str == '-')
		flag = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		++str;
	}
	return (res * flag);
}
