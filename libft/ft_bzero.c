/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmensso <akmensso@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 21:25:17 by akmensso          #+#    #+#             */
/*   Updated: 2025/11/17 20:06:08 by akmensso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*c;
	size_t	i;

	c = (char *)s;
	i = 0;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char c[] = "Bonjourak";
	ft_bzero(c, 7);
	printf("%s\n", c);
	bzero(c, 7);
	printf("%s\n", c);
}*/
