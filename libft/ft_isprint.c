/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmensso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:08:02 by akmensso          #+#    #+#             */
/*   Updated: 2025/11/18 18:27:51 by akmensso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main()
{
	char	c;

	c = 'b';
	printf("%d\n", ft_isprint(c));
	printf("%d\n", isprint(c));

	c = '\n';
	printf("%d\n", ft_isprint(c));
	printf("%d\n", isprint(c));

	c = '	';
	printf("%d\n", ft_isprint(c));
	printf("%d\n", isprint(c));

	c = ' ';
	printf("%d\n", ft_isprint(c));
	printf("%d\n", isprint(c));

	c = '4';
	printf("%d\n", ft_isprint(c));
	printf("%d\n", isprint(c));

	c = '/';
	printf("%d\n", ft_isprint(c));
	printf("%d\n", isprint(c));
}
*/
