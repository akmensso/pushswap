/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmensso <akmensso@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 23:00:04 by akmensso          #+#    #+#             */
/*   Updated: 2025/11/17 20:10:52 by akmensso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*s;
	size_t	i;

	s = (char *)str;
	i = 0;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{

	int	c;

	c = '7';
	size_t	n;
	char s[] = "Bonjour";
	n = 7;
	ft_memset(&s, c , n);
	printf("%s\n", s);
	memset(&s, c , n);
	printf("%s\n", s);
}
*/
