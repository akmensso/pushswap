/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmensso <akmensso@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 20:06:34 by akmensso          #+#    #+#             */
/*   Updated: 2025/11/17 20:12:05 by akmensso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sprime;
	size_t			i;

	sprime = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (sprime[i] == (unsigned char)c)
			return ((void *) &sprime[i]);
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	const char	s[] = "hello 42!";
	char	*p;

	p = ft_memchr(s, '4', 9);
	if (p)
		printf("%s\n", p);
	p = memchr(s, '4', 9);
	if (p)
		printf("%s\n", p);
}*/
