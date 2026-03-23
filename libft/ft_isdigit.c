/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmensso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:08:00 by akmensso          #+#    #+#             */
/*   Updated: 2025/11/17 20:08:12 by akmensso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int d)
{
	if (d >= '0' && d <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main()
{
	char	d;

	d = '5';
	printf("%d\n", ft_isdigit(d));
	printf("%d\n", isdigit(d));

	d = 'j';
	printf("%d\n", ft_isdigit(d));
	printf("%d\n", isdigit(d));

	d = '+';
	printf("%d\n", ft_isdigit(d));
	printf("%d\n", isdigit(d));
}*/
