/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 00:06:15 by bhung-yi          #+#    #+#             */
/*   Updated: 2022/08/30 00:06:30 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int atoi(const char *nptr)
{
    int				sign;
	long long		value;

	sign = 1;
	value = 0;
	while (*nptr == ' ' || *nptr == '\f' || *nptr == '\n' ||
			*nptr == '\r' || *nptr == '\t' || *nptr == '\v')
		nptr++;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == '-' || *nptr == '+')
		++nptr;
	while (ft_isdigit(*nptr))
	{
		value = value * 10 + (*nptr - '0');
		nptr++;
	}
	value = sign == 1 ? value : -value;
	return (value);
}
