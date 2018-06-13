/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:30:56 by ahorak            #+#    #+#             */
/*   Updated: 2018/06/06 21:31:08 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*str2;
	const char	*str1;

	str2 = dst;
	str1 = src;
	while (n > 0)
	{
		*str2++ = *str1++;
		n--;
	}
	return (dst);
}
