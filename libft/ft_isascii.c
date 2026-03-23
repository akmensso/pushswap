/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmensso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:25:19 by akmensso          #+#    #+#             */
/*   Updated: 2025/11/18 18:24:03 by akmensso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c < 128)
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main()
{
	char	c;

	c = '7'
	printf("%d\n", ft_isascii(c));
	printf("%d\n", isascii(c));

	c = 'm';
	printf("%d\n", ft_isascii(c));
	printf("%d\n", isascii(c));

	c = '&';
	printf("%d\n", ft_isascii(c));
	printf("%d\n", isascii(c));

	c = '^';
	printf("%d\n", ft_isascii(c));
	printf("%d\n", isascii(c));

	c = '`';
	printf("%d\n", ft_isascii(c));
	printf("%d\n", isascii(c));
}
*/
