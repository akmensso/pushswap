/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmensso <akmensso@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 20:31:41 by akmensso          #+#    #+#             */
/*   Updated: 2025/11/17 20:30:23 by akmensso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main()
{
	printf ("%c\n", ft_tolower('a'));
	printf ("%c\n", ft_tolower('A'));
	printf ("%c\n", ft_tolower('5'));
	printf ("%c\n", tolower('a'));
	printf ("%c\n", tolower('A'));
	printf ("%c\n", tolower('5'));
}*/
