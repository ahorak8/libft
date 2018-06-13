/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 19:46:07 by ahorak            #+#    #+#             */
/*   Updated: 2018/06/06 19:46:15 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	int		n;
	int		i;

	i = 0;
	n = (int)size;
	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (n-- > -1)
		*(str + i++) = '\0';
	*(str + i) = '\0';
	return (str);
}
