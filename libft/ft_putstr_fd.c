/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmensso <akmensso@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:12:54 by akmensso          #+#    #+#             */
/*   Updated: 2025/11/17 20:17:29 by akmensso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
/*
#include "libft.h"

int	main(void)
{
	ft_putstr_fd("Hello World", 1);
	ft_putstr_fd("\n", 1);
	ft_putstr_fd("Ceci est une erreur", 2);
	ft_putstr_fd("\n", 2);
	return (0);
}*/
