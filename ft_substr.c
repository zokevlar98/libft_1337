/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <zqouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:49:01 by zqouri            #+#    #+#             */
/*   Updated: 2023/10/30 17:49:01 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	char	*dest;
	size_t	i;
	size_t	size;

	if (!s)
		return (NULL);
	ptr = (char *)s;
	size = ft_strlen(s);
	i = 0;
	if (!len || start >= size)
		return (ft_strdup(""));
	if (len > size - start)
		len = size - start;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (i < len && ptr[start])
		dest[i++] = ptr[start++];
	dest[i] = '\0';
	return (dest);
}
