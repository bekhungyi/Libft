/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:55:19 by bhung-yi          #+#    #+#             */
/*   Updated: 2022/08/02 20:17:51 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int	ft_isalpha(int i);
int	ft_isdigit(int i);
int	ft_isalnum(int i);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	strlen(const char *s);
void    *ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

#endif
