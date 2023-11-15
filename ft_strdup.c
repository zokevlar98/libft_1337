/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <zqouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:48:19 by zqouri            #+#    #+#             */
/*   Updated: 2023/10/30 17:48:19 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*tab;
	int		size;
	char	*p;

	i = 0;
	p = (char *) src;
	size = ft_strlen(p);
	tab = (char *) malloc(sizeof(char) * (size + 1));
	if (!tab)
		return (NULL);
	while (p[i] != '\0')
	{
		tab[i] = p[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
