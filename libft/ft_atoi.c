/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmensso <akmensso@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 20:38:01 by akmensso          #+#    #+#             */
/*   Updated: 2025/11/17 20:57:50 by akmensso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		s;
	long	res;

	i = 0;
	s = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * s);
}
/*
#include <stdio.h>

int main(void)
{
	const char *s1 = "   -1234";
	const char *s2 = "42";
	const char *s3 = "   +987 abc";
	const char *s4 = "0012345";

	printf("ft_atoi(\"%s\") = %d\n", s1, ft_atoi(s1));
	printf("ft_atoi(\"%s\") = %d\n", s2, ft_atoi(s2));
	printf("ft_atoi(\"%s\") = %d\n", s3, ft_atoi(s3));
	printf("ft_atoi(\"%s\") = %d\n", s4, ft_atoi(s4));
}*/
