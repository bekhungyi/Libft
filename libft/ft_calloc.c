/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 00:12:13 by bhung-yi          #+#    #+#             */
/*   Updated: 2022/08/30 00:12:15 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void	*buffer;

	if (!(buffer = (void *)malloc(size * nmemb)))
		return (NULL);
	ft_bzero(buffer, size * nmemb);
	return (buffer);
}
