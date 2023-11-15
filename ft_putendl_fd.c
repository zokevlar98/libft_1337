/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <zqouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:47:47 by zqouri            #+#    #+#             */
/*   Updated: 2023/10/30 17:47:47 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;
	size_t	len;

	if (!s)
		return ;
	i = 0;
	len = ft_strlen(s);
	if (fd >= 0)
	{
		while (i < len)
		{
			write(fd, &s[i], 1);
			i++;
		}
		write(fd, &"\n", 1);
	}
}
