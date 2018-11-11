/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalenti <rvalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 22:23:39 by rvalenti          #+#    #+#             */
/*   Updated: 2018/11/10 13:43:58 by rvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	char	**dst;
	int		count;
	int		i;
	int		j;
	int		k;

	if (s == 0)
		return (NULL);
	count = ft_countword(s, c);
	i = 0;
	j = -1;
	if (!(dst = (char**)malloc(sizeof(char*) * count + 1)))
		return (NULL);
	while (++j < count && s[i] != '\0')
	{
		k = 0;
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i + k] != c && s[i + k] != '\0')
			k++;
		dst[j] = ft_strsub(s, i, k);
		i += k;
	}
	dst[j] = NULL;
	return (dst);
}
