/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:59:33 by bhung-yi          #+#    #+#             */
/*   Updated: 2022/08/02 20:23:51 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dst);
}
