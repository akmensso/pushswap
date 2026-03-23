/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmensso <akmensso@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:57:46 by akmensso          #+#    #+#             */
/*   Updated: 2025/11/17 20:13:47 by akmensso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	ft_putchar_fd('A', 1); // affiche sur la sortie standard
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('Z', 2); // affiche sur la sortie d’erreur
	ft_putchar_fd('\n', 2);
}
*/
