/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:32:00 by ahorak            #+#    #+#             */
/*   Updated: 2018/06/06 21:32:18 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ret;
	int		len;
	int		i;

	if (!s)
		return (NULL);
	while (*s && IS_SPACE(*s))
		s++;
	len = ft_strlen(s) == 0 ? 0 : ft_strlen(s) - 1;
	if (len > 0)
	{
		while (IS_SPACE(s[len]))
			len--;
		len++;
	}
	if (!(ret = (char *)malloc(sizeof(*ret) * len + 1)))
		return (NULL);
	ret[len] = '\0';
	i = 0;
	while (len--)
		ret[i++] = *s++;
	return (ret);
}
