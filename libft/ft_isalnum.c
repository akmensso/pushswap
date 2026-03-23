/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmensso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:35:44 by akmensso          #+#    #+#             */
/*   Updated: 2025/11/17 20:06:44 by akmensso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main()
{
	char	c;

	c = 'Q';
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));

	c = 'j';
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));

	c = '+';
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));

	c = '7';
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));
}*/
