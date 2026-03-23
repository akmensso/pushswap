/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmensso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:55:08 by akmensso          #+#    #+#             */
/*   Updated: 2025/11/17 20:07:29 by akmensso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));

	c = 'j';
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));
	
	c = '+';
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));
}*/
