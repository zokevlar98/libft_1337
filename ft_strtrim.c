/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <zqouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:48:57 by zqouri            #+#    #+#             */
/*   Updated: 2023/10/30 17:48:57 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in_set(char const *s1, char c)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (c == s1[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*tab;

	i = 0;
	k = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	j = ft_strlen(s1) - 1;
	while (ft_is_in_set(set, s1[i]))
		i++;
	if (i >= j)
		return (ft_strdup(""));
	while (ft_is_in_set(set, s1[j]))
		j--;
	tab = (char *)malloc(sizeof(char) * (j - i + 2));
	if (!tab)
		return (NULL);
	while (i <= j)
		tab[k++] = s1[i++];
	tab[k] = '\0';
	return (tab);
}
