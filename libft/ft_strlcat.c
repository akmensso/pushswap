/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmensso <akmensso@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:12:29 by akmensso          #+#    #+#             */
/*   Updated: 2025/11/17 20:48:29 by akmensso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	i;

	d = 0;
	s = ft_strlen((char *)src);
	while (d < size && dst[d])
		d++;
	if (d == size)
		return (size + s);
	i = 0;
	while (src[i] && d + i + 1 < size)
	{
		dst[d + i] = src[i];
		i++;
	}
	if (d + i < size)
		dst[d + i] = '\0';
	return (d + s);
}
/*
#include <stdio.h>
int	main()
{
	char dst[20] = "Hello";
	const char *src = " World";
	size_t size = sizeof(dst);
	size_t ret = ft_strlcat(dst, src, size);

	printf("Result: %s\n", dst);
	printf("Returned length: %zu\n", ret);
}*/
