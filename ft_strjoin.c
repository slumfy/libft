/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalenti <rvalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 21:02:21 by rvalenti          #+#    #+#             */
/*   Updated: 2018/11/09 05:26:08 by rvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*dst;

	if (s1 == 0 || s2 == 0)
		return (NULL);
	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(dst = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < ft_strlen(s1))
	{
		dst[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		dst[i + j] = s2[j];
		j++;
	}
	dst[i + j] = '\0';
	return (dst);
}
